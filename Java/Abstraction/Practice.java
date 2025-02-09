package Abstraction;
abstract class Vehicle {

    public abstract void doSomething();

    void Vehicle(){
        System.out.println("Vehicle is created earlyer");
    }
}

class Car extends Vehicle {
    @Override
    public void doSomething() {
        System.out.println("Car is running fast");
    }
}

public class Practice {
    public static void main(String[] args) {
        Car p = new Car();
        p.doSomething();
        p.Vehicle();
    }
}
