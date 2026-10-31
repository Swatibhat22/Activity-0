import java.util.Scanner;

class StudentDetails {

    public static void main(String[] args) {

        Scanner sc = new Scanner(System.in);

        System.out.println("Enter the no. of students:");
        int n = sc.nextInt();

        String[] name = new String[n];
        int[] rollNo = new int[n];
        int[] age = new int[n];
        double[] marks = new double[n];

        for (int i = 0; i < n; i++) {

            System.out.println("Enter name of student " + (i + 1) + ":");
            name[i] = sc.next();

            System.out.println("Enter roll no of student " + (i + 1) + ":");
            rollNo[i] = sc.nextInt();

            System.out.println("Enter age of student " + (i + 1) + ":");
            age[i] = sc.nextInt();

            System.out.println("Enter marks of student " + (i + 1) + ":");
            marks[i] = sc.nextDouble();
        }
        
        for (int i = 0; i < n; i++) {

            System.out.println("\nStudent " + (i + 1));
            System.out.println("Name    : " + name[i]);
            System.out.println("Roll No : " + rollNo[i]);
            System.out.println("Age     : " + age[i]);
            System.out.println("Marks   : " + marks[i]);
        }

        sc.close();
    }
}