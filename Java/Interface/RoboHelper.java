interface Teacher {
    void eating();
    void sleeping();
}

interface Assistant extends Teacher {
    void assisting();
}

interface Student {
    void working();
}

class Human implements Teacher, Assistant, Student {
    @Override
    public void eating() {
        System.out.println("Teacher is eating.");
    }
    @Override
    public void sleeping() {
        System.out.println("Teacher is sleeping.");
    }
    @Override
    public void assisting() {
        System.out.println("Assistant is assisting.");
    }
    @Override
    public void working() {
        System.out.println("Student is working.");
    }
}

public class RoboHelper {
    public static void main(String[] args) {
        Human roboHelper = new Human();
        roboHelper.eating();
        roboHelper.sleeping();
        roboHelper.assisting();
        roboHelper.working();
    }
}