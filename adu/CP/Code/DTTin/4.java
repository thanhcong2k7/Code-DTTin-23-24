import java.util.*;
class Main{
    public static void main(String[] args){
        Scanner scan = new Scanner(System.in);
        int t = scan.nextInt();
        for (int i=0; i<t; i++){
            int cnt = 0;
            long n = scan.nextLong();
            while(n!=0){
                if(n%2==1) cnt++;
                n/=2;
            }
            if(cnt%2==0)
                System.out.println("even");
            else System.out.println("odd");
        }
    }
}