public class LinearSearch {
    static boolean isTargetExist(int[] items, int target) {
        for (int i = 0; i < items.length; i++) {
            if (items[i] == target) {
                return true;
            }
        }
        return false;
    }

    public static void main(String[] args) {
        int targetInt = 3;
        int[] checkItems1 = { 1, 2, 3, 4, 5 };
        int[] checkItems2 = { 1, 2, 4, 5 };

        System.out.println(isTargetExist(checkItems1, targetInt));
        System.out.println(isTargetExist(checkItems2, targetInt));
    }
}