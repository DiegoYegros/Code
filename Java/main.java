import java.util.Scanner;

class Main {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        System.out.println("What is your age?");
        String age = scanner.nextLine();
        System.out.println("What is your name?");
        String name = scanner.nextLine();
        String formattedString = String.format("Hi, my name is %s and I am %s", name, age);
        System.out.println(formattedString);
        scanner.close();

    }
}