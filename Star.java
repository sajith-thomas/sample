
public class Star {
    public static void main(String[] args) {
        int rows = 10; // Number of rows for the star increment

        // Outer loop for rows
        for (int i = 1; i <= rows; i++) {
            // Inner loop for printing stars
            for (int j = 1; j <= i; j++) {
                System.out.print(" * ");
            }
            System.out.println(); // Move to the next line after each row
        }
    }
}
