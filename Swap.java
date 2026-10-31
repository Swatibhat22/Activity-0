import java.util.Scanner;
class Swap
{
public static void main(String[] args)
{
Scanner ob=new Scanner(System.in);
System.out.println("Enter num1:");
int a=ob.nextInt();
System.out.println("Enter num2:");
int b= ob.nextInt();
int c=a;
a=b;
b=c;
System.out.println("after swapping:"+a+"\t"+b);
}
}