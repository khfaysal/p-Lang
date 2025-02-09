abstract class Shape {

    public Shape() {
        System.out.println("Shape constructor");
    }

    abstract double calculateArea();

    public void displayShapeType() {
        System.out.println("This is a shape.");
    }
}

class Circle extends Shape {
    private double radius;

    public Circle(double radius) {
        this.radius = radius;
    }

    @Override
    double calculateArea() {
        return Math.PI * radius * radius;
    }
}

class Rectangle extends Shape {
    private double length, width;

    public Rectangle(double length, double width) {
        this.length = length;
        this.width = width;
    }

    @Override
    double calculateArea() {
        return length * width;
    }
}

public class Example {
    public static void main(String[] args) {
        Shape circle = new Circle(5);
        circle.displayShapeType();
        System.out.println("Circle Area: " + circle.calculateArea());

        Shape rectangle = new Rectangle(4, 6);
        rectangle.displayShapeType();
        System.out.println("Rectangle Area: " + rectangle.calculateArea());
    }
}
