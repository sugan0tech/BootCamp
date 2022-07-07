public class Main {
    public static void main(String args[]){
        // OneDimentional Arrays
        int a[]; 
        a=new int[3];
        
        a[0]=100;
        a[1]=200;
        a[2]=300;
        
        int v;
        for(int i=0;i<a.length;i++)
        {
            v=a[i];
            System.out.println("   "+v);      
        }
        // TwoDimentional Arrays
        int arr[][];
        arr = new int[3][];
        arr[0] = new int[1];
        arr[1] = new int[2];
        arr[2] = new int[3];
        for (int[] is : arr) {
            System.out.println(is.length);
        }

    }
    
}
