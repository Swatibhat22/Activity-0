public class Copy {
    String name;
    int age;
    Copy(String name, int age){
        this.name=name;
        this.age=age;
    }
        Copy(Copy other){
            this.name= other.name;
            this.age=other.age;
        }
        void display(){
            System.out.println(name);
            System.out.println(age);
        }
        public static void main(String[] args){
            Copy s1=new Copy("Alice", 20);
            Copy s2= new Copy(s1);

            s1.display();
            s2.display();
    }
}

