import java.util.Scanner;
import java.lang.*;
class Main{
    public static void main(String[] args){
        Scanner scan = new Scanner(System.in);
        int t = scan.nextInt();
        for (int i=1; i<=t; i++){
            long n = scan.nextLong();
            long x = scan.nextLong();
            System.out.println((n-1)*(Math.abs(10-x)));
        }
    }
}