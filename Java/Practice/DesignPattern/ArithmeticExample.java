
public class ArithmeticExample {

    public static void main(String[] args) {
        int a = 10;
        int b = 0;
        int result = 0;

        try {
            System.out.println("Inside try block...");
            result = a / b;  // This will throw ArithmeticException
            System.out.println("Result: " + result); // This line won't run
        } catch (ArithmeticException e) {
            System.out.println("Exception caught: " + e.getMessage());
        } finally {
            System.out.println("This block always executes, no matter what!");
        }

        System.out.println("Program continues after exception handling...");
    }
}
