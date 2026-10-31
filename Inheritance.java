public class Inheritance {
    float salary=40000;
}

class Programmer extends Inheritance{
    int bonus=10000;
    public static void main(String[] args){
        Programmer p1=new Programmer();
        System.out.println("Programmer salary is:"+p1.salary);
        System.out.println("Bonus of Programmer is:"+p1.bonus);
    }
}

