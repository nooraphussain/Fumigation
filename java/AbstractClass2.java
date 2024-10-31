public class AbstractClass2 extends Absttract{
    
    void onText(String text){
        System.out.println(text);
    }

    AbstractClass2(){


        @SuppressWarnings("unused")
        AbtractClass ac = new AbtractClass(this);

    }

    public static void main(String[] args) {

        @SuppressWarnings("unused")
        AbstractClass2 ac2 = new AbstractClass2();
    }
}
//Absttract
//AbtractClass