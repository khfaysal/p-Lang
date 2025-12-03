
import java.io.FileReader;
import java.io.IOException;

public class IOExceptionExample {

    public static void main(String[] args) {
        FileReader file = null;
        try {
            int ch = file.read();
            System.out.print((char) ch);
        } catch (NullPointerException e) {
            System.out.println("Caught NullPointerException: file reference is null.");
        } catch (IOException e) {
            // kept in case FileReader is later initialized and I/O errors occur
            System.out.println("Caught IOException: " + e.getMessage());
        }
    }
}
