class NoArgument {
    String name;
    int age;

    // No-argument constructor
    NoArgument() {
        name = "Alice";
        age = 20;
    }

    void display() {
        System.out.println("Name: " + name);
        System.out.println("Age: " + age);
    }

    public static void main(String[] args) {
        NoArgument s1 = new NoArgument();

        s1.display();
    }
}
