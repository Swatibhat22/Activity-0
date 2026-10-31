import java.util.Scanner;

class Person {
    String name;
    int age;

    Person(String name, int age) {
        this.name = name;
        this.age = age;
    }
}

class Student extends Person {
    private int rollNo;
    private String course;

    Student(String name, int age, int rollNo, String course) {
        super(name, age);
        this.rollNo = rollNo;
        this.course = course;
    }

    void display() {
        System.out.println("Name: " + super.name);
        System.out.println("Age: " + super.age);
        System.out.println("Roll No: " + this.rollNo);
        System.out.println("Course: " + this.course);
    }
}

public class StudentDetails {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        System.out.print("Enter name: ");
        String name = sc.nextLine();

        System.out.print("Enter age: ");
        int age = sc.nextInt();

        System.out.print("Enter roll number: ");
        int rollNo = sc.nextInt();
        sc.nextLine();

        System.out.print("Enter course: ");
        String course = sc.nextLine();

        Student s = new Student(name, age, rollNo, course);

        System.out.println("\nStudent Details:");
        s.display();
    }
}