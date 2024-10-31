import java.util.Scanner;

public class HelloWorld {
    public static void main(String[] args) {


        Scanner s = new Scanner(System.in);

        System.out.println("Enter two number: ");

        int a = s.nextInt();
        int b = s.nextInt();
        int c = a+b;

        System.out.println("Sum: "+c);
        s.close();

    }
}   