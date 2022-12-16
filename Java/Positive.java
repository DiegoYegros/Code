// You get an array of numbers, return the sum of all of the positives ones.
public class Positive {

    public static int sum(int[] arr) {
        int sum = 0;
        for (int i : arr) {
            if (i > 0)
                sum += i;
        }
        return sum;
    }
}