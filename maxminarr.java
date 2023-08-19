import java.util.*;

class maxminarr{

    public static void main(String[] args){
        int arr[] = {20,12,42,22,4,92};
        int arrsize = arr.length;        
        Arrays.sort(arr);
        System.out.println("min element: "+ arr[0]);
        System.out.println("max element: "+ arr[arrsize-1]);
        
    }
}