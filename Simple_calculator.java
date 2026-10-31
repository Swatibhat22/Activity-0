import java.util.Scanner;
class Simple_calculator
{
public static void main(String[] args)
{
Scanner ob=new Scanner(System.in);
System.out.println("Enter num1:");
int a=ob.nextInt();
System.out.println("Enter num2:");
int b= ob.nextInt();
int c=a+b;
int d=a-b;
int e=a*b;
int f=a/b;
System.out.println("Sum :"+c);
System.out.println("Difference :"+d);
System.out.println("Product:"+e);
System.out.println("Quotient:"+f);
}
}