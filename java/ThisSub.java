public class ThisSub {
    int a = 100, b = 200;

    ThisSub(int a, int b) {
        int originalA = a;
        int originalB = b;//  overwrites the original values stored in the separate variables 

        this.a = a;
        this.b = b;

        System.out.println("a: " + originalA + "\tb: " + originalB);
        System.out.println("a: " + this.a + "\tb: " + this.b);
    }
}