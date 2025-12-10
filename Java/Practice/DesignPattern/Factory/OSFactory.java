package Factory;

class OSFactory {

    public OS getInstance(String str) {
        if (str.equals("Powerful")) {
            return new Windows();
        } else if (str.equals("Customisable")) {
            return new Linux();
        } else {
            return new Mac();
        }
    }
}
