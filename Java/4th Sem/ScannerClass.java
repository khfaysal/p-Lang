import java.util.Scanner;
import java.util.jar.Attributes.Name;

public class ScannerClass {
    public static void main(String[] args) {
        Scanner s = new Scanner(System.in);

        System.err.println("enter the name: ");
        String Name = s.nextLine();

        System.err.println("enter the age : ");
        int Age = s.nextInt();

        System.err.println("Name, " + Age);

    }
}
