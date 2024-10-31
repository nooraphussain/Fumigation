public class StaticInt {

    int a = 10;
    static int b = 20;
    @SuppressWarnings("static-access")
    public static void main(String[] args) {

        StaticInt st = new StaticInt();
        System.out.println(st.a);
        System.out.println(st.b);
        System.out.println(b);

        st.hello(); 
        st.hey();
        hey(); 

    }
    void hello(){
        System.out.println("Hello!!");
    }
    static void hey(){
        System.out.println("heyyy...");
    }
}
