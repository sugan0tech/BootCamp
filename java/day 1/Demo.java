class Tst{
    static String str;
    String data;
    public void method(){
        System.out.println("This is an instance method");
    }
}
public class Demo{
	public static void main(String ss[]){
        Tst.str = "static value";
        Tst obj = new Tst();
        obj.data = "This instance variable";
        System.out.println(Tst.str);
        obj.method();

        // Data types
        int num = 5;               
        char character ='c';       
        boolean boolVal = true;    
        String str = "Hello World";
        float myFloatNum = 5.989f; 
	}
}