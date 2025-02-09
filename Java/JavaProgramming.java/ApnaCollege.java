public abstract class ApnaCollege {

    public abstract void greet();

    public void greet2() {
        System.out.println("Good Morning");
    }

}

class B extends ApnaC {

    public void greet() {
        System.out.println("Good Morning Everyone");
    }

}

public class ApnaC {

    public static void main(String[] args) {

        B obj = new B();
        obj.greet();

    }

}
