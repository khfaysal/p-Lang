class Employee {
    private String employeeName;
    private double salary;

    public Employee(String employeeName) {
        this.employeeName = employeeName;
    }

    public Employee(double initialSalary) {
        this.salary = initialSalary;
    }

    public void updateSalary(double newSalary) {
        if (newSalary > 0) {
            this.salary = newSalary;
            System.out.println("Salary updated successfully.");
        } else {
            System.out.println("Invalid salary amount. Salary must be greater than zero.");
        }
    }

    public void displayEmployeeDetails() {
        System.out.println("Employee Name: " + employeeName);
    }
}

public class E_M_System {
    public static void main(String[] args) {
        Employee employee = new Employee("Alice Johnson");
        employee.displayEmployeeDetails();
        employee.updateSalary(60000);
        employee.updateSalary(5000);
    }
}
