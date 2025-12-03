package Prototype;

class Employee implements EmployeePrototype {

    private String name;
    private int id;
    private String department;

    public int getId() {
        return id;
    }

    public String getName() {
        return name;
    }

    public String getDepartment() {
        return department;
    }

    public void setName(String name) {
        this.name = name;
    }

    public void setId(int id) {
        this.id = id;
    }

    public Employee(String name, int id, String department) {
        this.name = name;
        this.id = id;
        this.department = department;
    }

    public Employee clone() {

        return new Employee(this.name, this.id, this.department);
    }
}
