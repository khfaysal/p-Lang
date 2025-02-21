import java.util.ArrayList;

public class ArrayL {
    public static void main(String[] args) {
        ArrayList<String> list = new ArrayList<>();
        list.add("Java");
        list.add("Python");
        list.add("C++");
        list.add("JavaScript");

        list.set(1, "C");
        list.remove(2);
        // list.clear();

        System.out.println(list.size());
        System.out.println(list);
        System.out.println(list.isEmpty());
        System.out.println(list.contains("Java"));
        
    }
}