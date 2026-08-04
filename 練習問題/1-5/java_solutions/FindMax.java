package java_solutions;

public class FindMax {
    static int findMax(int[] arr) {

        int maxValue = arr[0];
        for (int index = 1; index < arr.length; index++) {
            if (arr[index] > maxValue) {
                maxValue = arr[index];
            }
        }
        return maxValue;
    }

    public static void main(String[] args) {
        int[] searchArray = { 1, 3, 7, 1, 6, 46, -53 };

        System.out.print(findMax(searchArray));
    }
}