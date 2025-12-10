package Factory;

class Linux implements OS {

    @Override
    public void spec() {
        System.out.println("Most customizable OS");
    }
}
