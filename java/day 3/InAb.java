abstract class Abs{

 	abstract void method();
}

class Child extends Abs
{
    void method(){
        System.out.println("overridden method");
    }
}

interface Test {
    public void test();
}

class Tst implements Test {
    public void test() {

        System.out.println("test");
    };
}


public class InAb {
    public static void main(String[] args) {
        Child child = new Child();
        child.method();
        Tst obj = new Tst();
        obj.test();
    }

}
