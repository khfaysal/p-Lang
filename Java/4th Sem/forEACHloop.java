import java.util.ArrayList;

public class forEACHloop {
    public static void main(String[] args) {
        ArrayList<Integer> numbers = new ArrayList<>();
        numbers.add(10);
        numbers.add(20);
        numbers.add(5);
        numbers.add(15);

        // For-Each Loop
        for (int n : numbers) {
            System.err.println(n);
        }

        ArrayList<String> St = new ArrayList<>();
        St.add("Faysal");
        St.add("Kamrul");
        St.add("Hasan");

        for (String S : St) {
            System.err.println(S);
        }

    }
}
