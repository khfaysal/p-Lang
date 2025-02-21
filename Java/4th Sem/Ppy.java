class Puppy {
    int puppyAge;
    String name;

    public void setnameNage(String nm, int age) {
        this.name = nm;
        this.puppyAge = age;
        System.out.println("Name: " + name + " , Age: " + puppyAge);
    }
}

public class Ppy {
    public static void main(String[] args) {
        Puppy p = new Puppy();
        p.setnameNage("Faysal", 22);
    }
}
