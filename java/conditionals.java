import java.util.Scanner;

public class conditionals {
    public static void main(String[] args) {

        Scanner sc = new Scanner(System.in);
        System.out.println("Enter a number: ");

        int num = sc.nextInt();

        if(num > 0){
            System.out.println("positive");
        }else if (num < 0) {
            System.out.println("negative");
        } else {
            System.out.println("zero");
        }
        sc.close();
    }
}
