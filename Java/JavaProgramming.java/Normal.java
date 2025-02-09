class Boom {

    void Bvabi() {
        System.out.println("Non Abstract Method");
    }
}

public class Normal {
    public static void main(String[] args) {

        Boom obj = new Boom();
        obj.Bvabi();
    }
}
