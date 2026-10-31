import java.util.Scanner;
class Temp{
public static void main(String[] args){
Scanner ob=new Scanner(System.in);
System.out.println("Enter temp in Farenheit:");
float f= ob.nextFloat();
float c=((5/9)*f)+32;
System.out.println("Temp in celsius:"+c);
}
}