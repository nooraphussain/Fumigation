public class Polymorphism2b extends Polymorphism2a {
    void display(){
        System.out.println("second");
        super.display();// runs "first" from super
    }
}
