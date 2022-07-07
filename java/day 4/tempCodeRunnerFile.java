class Tst{
    int num;
    Tst(){};
    Tst(int num){
        this.num = num;
    }
    int getNum(){
        return num;
    }
    void setNum(int num){
        this.num = num;
    }

    void setNum(Tst obj){
        this.num = obj.num;
    }

}
public class Main {
    public static void main(String args[]){
        Tst obj = new Tst();
        obj.setNum(4);
        System.out.println(obj.getNum());
        Tst obj2 = new Tst();
        obj2.setNum(5);
        obj.setNum(obj2);
        System.out.println(obj.getNum());
    }
    
}
