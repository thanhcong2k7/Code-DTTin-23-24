import java.util.Scanner;
class Main{
    public static void main(String[] args){
        Scanner scan = new Scanner(System.in);
        int t = scan.nextInt();
        for (int i=1; i<=t; i++){
            String n = scan.nextLine();
            n = n.replace("0","5");
            System.out.println(n);
        }
    }
}