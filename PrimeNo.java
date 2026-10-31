import java.util.Scanner;
class PrimeNo {
    public static void main(String[] args){
        System.out.println("Enter the number:");
        Scanner sc=new Scanner (System.in);
        int n=sc.nextInt();
        int count=0;
        for(int i=1; i<=n; i++){
            if(n%i==0){
                count++;
            }
        }
        if(count==2){
            System.out.println(n+" is a prime number");
        }
        else{
            System.out.println(n+" is not a prime number");
        }
    }
}
