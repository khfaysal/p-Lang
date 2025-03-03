// Base abstract class
abstract class Animal {
    abstract void move(); // Abstract method to define movement
}

// Bird class
class Bird extends Animal {
    @Override
    void move() {
        System.out.println("Birds fly in the sky.");
    }
}

// Mammal class
class Mammal extends Animal {
    @Override
    void move() {
        System.out.println("Mammals run on land.");
    }
}

// Fish class
class Fish extends Animal {
    @Override
    void move() {
        System.out.println("Fish swim in water.");
    }
}

// Main class to demonstrate polymorphism
public class dynamicAbstraction {
    public static void main(String[] args) {
        // Creating animal objects
        Animal bird = new Bird();
        Animal mammal = new Mammal();
        Animal fish = new Fish();
        
        // Storing all animals in a single list
        Animal[] animals = {bird, mammal, fish};
        
        // Calling move() dynamically
        for (Animal animal : animals) {
            animal.move();
        }
    }
}
