import java.util.Scanner;
public class Calculator {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        char operator;
        double num1, num2, result;

        // Input operator from the user
        System.out.print("Enter operator (+, -, *, /): ");
        operator = scanner.next().charAt(0);

        // Input two numbers from the user
        System.out.print("Enter two numbers: ");
        num1 = scanner.nextDouble();
        num2 = scanner.nextDouble();

        // Perform operation based on the operator
        switch (operator) {
            case '+':
                result = num1 + num2;
                System.out.printf("%.2f + %.2f = %.2f\n", num1, num2, result);
                break;
            case '-':
                result = num1 - num2;
                System.out.printf("%.2f - %.2f = %.2f\n", num1, num2, result);
                break;
            case '*':
                result = num1 * num2;
                System.out.printf("%.2f * %.2f = %.2f\n", num1, num2, result);
                break;
            case '/':
                if (num2 != 0) {
                    result = num1 / num2;
                    System.out.printf("%.2f / %.2f = %.2f\n", num1, num2, result);
                } else {
                    System.out.println("Error! Division by zero is not allowed.");
                }
                break;
            default:
                System.out.println("Error! Invalid operator.");
        }

        scanner.close();
    }
}
