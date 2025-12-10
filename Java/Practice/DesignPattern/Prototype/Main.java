package Prototype;

public class Main {

    public static void main(String[] args) {
        Employee base = new Employee("Name", 0, "SWE");

        Employee emp1 = base.clone();
        // emp1 = new Employee("Maruf", emp1.getId() + 1, "CSE");
        emp1.setName("Saim");
        // emp1.name = "Kamrul";
        emp1.setId(566);

        Employee emp2 = base.clone();
        // // emp2 = new Employee("Rayhan", emp2.getId() + 1, "CSE");

        System.out.println(emp1.getName() + " " + emp1.getId() + " " + emp1.getDepartment());
        System.out.println(emp2.getName() + " " + emp2.getId() + " " + emp2.getDepartment());

    }
}
