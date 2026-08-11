package java_solutions;

import java.util.Arrays;
import java.util.Random;

public class BinarySearch {
    static int randomTarget(Random rand) {
        return 5 + rand.nextInt(100 - 5 + 1);
    }

    static int[] randomArr(Random rand, int n) {
        int[] pool = new int[96];
        for (int i = 0; i < 96; i++) {
            pool[i] = 5 + i;
        }

        for (int i = 0; i < n; i++) {
            int j = i + rand.nextInt(96 - i);
            int tmp = pool[i];
            pool[i] = pool[j];
            pool[j] = tmp;
        }

        int[] arr = Arrays.copyOf(pool, n);
        Arrays.sort(arr);
        return arr;
    }

    static boolean binarySearch(int[] arr, int target) {
        int low = 0;
        int high = arr.length - 1;

        while (low <= high) {
            int mid = (low + high) / 2;
            if (target == arr[mid]) {
                return true;
            } else if (target < arr[mid]) {
                high = mid - 1;
            } else
                low = mid + 1;
        }

        return false;
    }

    public static void main(String[] args) {
        Random rand = new Random();
        int n = 5 + rand.nextInt(96 - 5 + 1);
        int[] searchArr = randomArr(rand, n);
        int target = randomTarget(rand);

        System.out.println("target: " + target);
        System.out.println("searchArr: " + Arrays.toString(searchArr));
        System.out.println("result: " + binarySearch(searchArr, target));
    }
}