public class OOPs {
    public static void main(String[] args) {
        System.out.println("Hello World!");

        Sample s1 = new Sample();
        Sample s2 = new Sample();

        s1.a = 10;
        s1.b = 20;
        s2.a = 30;
        s2.b = 40;

        System.out.println("S1-a : "+ s1.a);
        System.out.println("S1-b : "+ s1.b);
        System.out.println("S2-a : "+ s2.a);
        System.out.println("S2-b : "+ s2.b +"\n");

        // Import the public Hello class
        Hello h1 = new Hello();
        Hello h2 = new Hello();

        h1.c = 100;
        h1.d = 200;
        h2.c = 300;
        h2.d = 400;

        h1.display(); // Now call display method with the imported class
        h2.display();

    }
}
class Sample {
    int a;
    int b;
}