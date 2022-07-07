class Parent{
    Parent(){}; // default constructor
    Parent(int num){ // parameterised constructor (over loaded)
        System.out.println("given num : :" + num);
    }

    public void sayHi(){
        System.out.println("Hi there");
    }

}
class Child extends Parent{
    Child(){
        super(8); // calling parent's constructor via super
    }
}
public class Main {
    public static void main(String args[]){
        Parent obj = new Parent();
        obj.sayHi();
        Parent objc =new Child(); // UpCasting

    }
    
}
