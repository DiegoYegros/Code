import java.util.Scanner;
import java.util.ArrayList;
import java.util.Comparator;

class Main {
    public static void main(String[] args) {
        ArrayList<Integer> numbers = new ArrayList<Integer>();
        int multiplicator = 2;
        numbers.add(1);
        numbers.add(2);
        numbers.add(3);
        numbers.add(4);
        numbers.add(5);

        System.out.println("Before: " + numbers.toString());

        numbers.forEach(number -> {
            numbers.set(numbers.indexOf(number), number * multiplicator);
            System.out.printf("%d * %d = %d\n", number, multiplicator, number * multiplicator);
        });
        System.out.println((numbers.sort(Comparator.naturalOrder())).toString(););
    }
}