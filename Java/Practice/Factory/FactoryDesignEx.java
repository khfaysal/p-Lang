package Factory;

interface OS {

    void spec();
}

public class FactoryDesignEx {

    public static void main(String[] args) {
        // OS obj = new Linux();
        // obj.spec();
        OSFactory osj = new OSFactory();
        OS obj = osj.getInstance("Powerful");
        obj.spec();
    }
}
