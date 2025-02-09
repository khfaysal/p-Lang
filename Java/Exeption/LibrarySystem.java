public class LibrarySystem {

    public static void checkAge(int age) throws InvalidAgeException {
        if (age < 12) {
            throw new InvalidAgeException("Error: Age must be at least 12 years old to borrow books.");
        }
        System.out.println("Case 1: Age is valid for borrowing.");
    }

    public static void main(String[] args) {
        int userAge = 10; // Change this value to test different cases

        try {
            checkAge(userAge); 
        } catch (InvalidAgeException e) {
            System.out.println(e.getMessage());
        }
    }
}

class InvalidAgeException extends Exception {
    public InvalidAgeException(String message) {
        super(message);
    }
}