package Singleton;

public class Singleton {

    public static void main(String[] args) {
        // Both variables will point to the same instance
        DatabaseConnection db1 = DatabaseConnection.getInstance();
        DatabaseConnection db2 = DatabaseConnection.getInstance();

        // Check if both are same
        if (db1 == db2) {
            System.out.println("Both objects are the same instance!");
        }
    }
}
