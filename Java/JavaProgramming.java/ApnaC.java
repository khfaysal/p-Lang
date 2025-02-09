abstract class ApnaCollege {

    void ApnaCollege() {
        System.out.println("Non Abstract Method");
    }

    public abstract void greet();

    public void greet2() {
        System.out.println("Good Morning");
    }

}

class B extends ApnaCollege {

    public void greet() {
        System.out.println("Good Morning Everyone");
    }

}

public class ApnaC {

    public static void main(String[] args) {

        B obj = new B();
        obj.greet();
        obj.ApnaCollege();

    }

}
