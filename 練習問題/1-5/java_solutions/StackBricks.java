package java_solutions;

import java.util.ArrayList;
import java.util.List;

public class StackBricks {
    static List<String> stackBricks(int height) {
        List<String> result = new ArrayList<>();

        while (height > 0) {
            result.add("#");
            height -= 1;
        }
        return result;
    }

    public static void main(String[] args) {
        int targetHeight = 5;

        System.out.print(String.join("\n", stackBricks(targetHeight)));
    }
}
