package Singleton;

class DatabaseConnection {

    // Step 1: Create a private static variable to hold the single instance
    private static DatabaseConnection instance;

    // Step 2: Make the constructor private so no one can create another instance
    private DatabaseConnection() {
        System.out.println("Database connected successfully!");
    }

    // Step 3: Provide a public static method to get the instance
    public static DatabaseConnection getInstance() {
        if (instance == null) {
            instance = new DatabaseConnection(); // Create instance only once
        }
        return instance;
    }

}
