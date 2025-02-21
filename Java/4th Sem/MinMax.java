import java.util.ArrayList;
import java.util.Collections;

public class MinMax {
    public static void main(String[] args) {
        ArrayList<Integer> numbers = new ArrayList<>();
        numbers.add(10);
        numbers.add(20);
        numbers.add(5);
        numbers.add(15);

        int max = Collections.max(numbers);
        int min = Collections.min(numbers);

        System.out.println("Maximum: " + max);
        System.out.println("Minimum: " + min); 
    }
}
