public class Samplee {
    public static void main(String[] args) {

        int num1 = 100;
        int num2 = 200;

        int num3 = 300;
        int num4 = 400;

        Sum s=new Sum();

        s.calculateSum(num1, num2); 
        s.displaySum(); 

        s.calculateSum(num3, num4); 
        s.displaySum(); 

  
    }
}
//calling from public class Sum