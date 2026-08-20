import java.util.ArrayList;
import java.util.List;

public class Stack {
    static void push(String string, List<String> pile) {
        pile.add(string);
        System.out.println(pile);
    }

    static void pop(List<String> pile) {
        if (pile.isEmpty()) {
            System.err.println("リストが空です");
            return;
        }
        pile.removeLast();
        System.out.println(pile);
    }

    public static void main(String[] args) {
        List<String> pile = new ArrayList<>();
        push("A", pile);
        push("B", pile);
        push("C", pile);
        pop(pile);
        pop(pile);
        push("D", pile);
        pop(pile);
    }
}
