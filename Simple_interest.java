import java.util.Scanner;
class Simple_interest
{
public static void main(String[] args)
{
Scanner ob= new Scanner(System.in);
System.out.println("Enter amount:");
float p= ob.nextFloat();
System.out.println("Enter time period:");
int t= ob.nextInt();
System.out.println("Enter rate:");
int r= ob.nextInt();
float s=(p*t*r)/100;
System.out.println("Simple interest:"+s);
}
}