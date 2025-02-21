import java.util.ArrayList;

public class compare {

    public static void main(String[] args) {
        ArrayList<String> list1 = new ArrayList<>();
        list1.add("Jahan");
        list1.add("Lisa");

        ArrayList<String> l2 = new ArrayList<>();

        l2.add("Jahan");
        l2.add("Lisa");

        System.out.println(list1.equals(l2));
    }
}