import java.util.Scanner;

public class Function { // Class name should follow CamelCase convention
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in); // Added closing parenthesis
        System.out.println("Enter two numbers: ");

        int num1 = sc.nextInt();
        int num2 = sc.nextInt();

        int result = sum(num1, num2); // Pass individual arguments

        System.out.println("Sum: " + result);
        sc.close(); // Remember to close the Scanner
    }

    public static int sum(int a, int b) { // Function should return an integer
        int s = a + b;
        return s;
    }
}