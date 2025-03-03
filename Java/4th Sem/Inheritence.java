class Parent {
    public Parent() {
        System.err.println("I am P");
    }

}

class Child extends Parent {
    public Child() {
        System.err.println("I am C");
    }
}

                       public class Inheritence {
    public static void main(String[] args) {
        Child C = new Child();  
        /*  [as Child class extends Parent class. so whenever a object is 
        created from Child class it goes to the parent class first and 
        pring the default constructor of Parent class then the child class]*/

    }
}
