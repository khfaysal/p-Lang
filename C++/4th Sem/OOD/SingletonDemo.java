// Singleton Class

class President {

    private static President instance;

    // Private constructor to prevent instantiation
    private President() {
        System.out.println("A President has been elected.");
    }

    // Public method to provide access to the instance
    public static President getInstance() {
        if (instance == null) {
            instance = new President(); // Lazy initialization
        }
        return instance;
    }

    // Sample method to demonstrate functionality
    public void announce() {
        System.out.println("I am the President of this country.");
    }
}

public class SingletonDemo {

    public static void main(String[] args) {
        President p1 = President.getInstance();
        p1.announce();
        President p2 = President.getInstance();
        p2.announce();
        // Check if both are the same object
        if (p1 == p2) {
            System.out.println("Both p1 and p2 refer to the same President instance.");
        } else {
            System.out.println("Different President instances exist (which shouldn't happen in Singleton).");
        }
    }
}
