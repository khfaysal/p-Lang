abstract class Shape {
    abstract int measure(); // Abstract method

    public void displayShapeType1() { // Concrete method 1 for Squre
        System.out.println("This is a Squre Box.");
    }

    public void displayShapeType2() { // Concrete method 2 for Rectangle
        System.out.println("This is a Rectangle Box.");
    }

}

class Squre extends Shape {
    private int side;

    public Squre(int side) {
        this.side = side;
    }

    @Override
    int measure() {
        return side * side;
    }
}

class Rectangle extends Shape {
    private int length, width;

    public Rectangle(int length, int width) {
        this.length = length;
        this.width = width;
    }

    @Override
    int measure() {
        return length * width;
    }
}

public class ShapeOfBox {
    public static void main(String[] args) {
        Shape squre = new Squre(4);
        squre.displayShapeType1();
        System.out.println("Squre Area: " + squre.measure());
        Shape rectangle = new Rectangle(4, 6);
        rectangle.displayShapeType2();
        System.out.println("Rectangle Area: " + rectangle.measure());
    }

}