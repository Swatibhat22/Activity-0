class Parametrized{
    String name;
    int age;
Parametrized(String n, int a){
        name=n;
        age=a;
}
void display(){
        System.out.println("Name:"+name);
        System.out.println("Age:"+age);
}
public static void main(String[] args){
    Parametrized s1=new Parametrized("Alice", 20);
    Parametrized s2= new Parametrized("Bob", 22);

    s1.display();
    s2.display();
}
}