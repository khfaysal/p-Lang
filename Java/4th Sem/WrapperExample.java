import java.util.ArrayList;

public class WrapperExample {
    public static void main(String[] args) {

        ArrayList<Object> mixedList = new ArrayList<>();

        mixedList.add(100);
        mixedList.add(99.99);
        mixedList.add('A');
        mixedList.add(true);
        mixedList.add("Java");
        for (Object item : mixedList) {
            System.out.println(item + " - " + item.getClass().getSimpleName());
        }
    }
}
