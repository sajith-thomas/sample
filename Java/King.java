import java.util.Scanner;

public class King {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in); 

        System.out.println("Enter first value:");
        int value1 = scanner.nextInt(); 
        System.out.println("Enter second value:");
        int value2 = scanner.nextInt(); 

        int sum = value1 + value2; 

        System.out.println("The sum of " + value1 + " and " + value2 + " is " + sum);
    }
}

