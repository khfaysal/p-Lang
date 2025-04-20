
class Car {

    private int doors;
    private String color;
    private String engineType;

    private Car(Builder builder) {
        this.doors = builder.doors;
        this.color = builder.color;
        this.engineType = builder.engineType;
    }

    public void showDetails() {
        System.out.println("Car Details:");
        System.out.println("Doors: " + doors);
        System.out.println("Color: " + color);
        System.out.println("Engine Type: " + engineType);
    }

    public static class Builder {

        private int doors;
        private String color;
        private String engineType;

        Builder(int doors) {
            this.doors = doors;
        }

        public Builder setColor(String color) {
            this.color = color;
            return this;
        }

        public Builder setEngineType(String engineType) {
            this.engineType = engineType;
            return this;
        }

        public Car build() {
            return new Car(this);
        }
    }
}

public class BuilderDesign {

    public static void main(String[] args) {
        // Messi's Car
        BuilderDesign messiCar = new BuilderDesign.Builder(4)
                .setColor("Metallic Blue")
                .setEngineType("Sport")
                .build();
        // Ronaldo's Car
        BuilderDesign ronaldoCar = new BuilderDesign.Builder()
                .setDoors(2)
                .setColor("Jet Black")
                .setEngineType("Sport")
                .build();
        System.out.println("Messi's Car:");
        messiCar.showDetails();
        System.out.println("\nRonaldo's Car:");
        ronaldoCar.showDetails();
    }
}
