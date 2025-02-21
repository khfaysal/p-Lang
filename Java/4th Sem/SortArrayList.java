import java.util.ArrayList;
import java.util.Collections;
import java.util.Comparator;

public class SortArrayList {

    public static void main(String[] args) {
        ArrayList<Integer> numbers = new ArrayList<>();
        numbers.add(45);
        numbers.add(12);
        numbers.add(78);
        numbers.add(33);
        // Collections.sort(numbers);
        Collections.sort(numbers, Comparator.reverseOrder());
        System.out.println(numbers);
    }
}