// SmartClass Interface
interface SmartClass {
    void turnOn();

    void turnOff();
}

// Subsystem: Lighting System
class LightingSystem implements SmartClass {
    public void turnOn() {
        System.out.println("Lighting System: Lights ON");
    }

    public void turnOff() {
        System.out.println("Lighting System: Lights OFF");
    }

}

// Subsystem: Temperature Control System
class TemperatureControlSystem implements SmartClass {
    public void turnOn() {
        System.out.println("Temperature Control System: AC ON");
    }

    public void turnOff() {
        System.out.println("Temperature Control System: AC OFF");
    }
}

// Subsystem: Projector System
class ProjectorSystem implements SmartClass {
    public void turnOn() {
        System.out.println("Projector System: Projector ON");
    }

    public void turnOff() {
        System.out.println("Projector System: Projector OFF");
    }
}

// Facade Class
class SmartClassroomFacade implements SmartClass {

    private LightingSystem lighting;
    private TemperatureControlSystem temperature;
    private ProjectorSystem projector;

    public SmartClassroomFacade() {
        lighting = new LightingSystem();
        temperature = new TemperatureControlSystem();
        projector = new ProjectorSystem();
    }

    public void turnOn() {
        System.out.println("Starting Class...");
        lighting.turnOn();
        temperature.turnOn();
        projector.turnOn();
    }

    public void turnOff() {
        System.out.println("Ending Class...");
        projector.turnOff();
        temperature.turnOff();
        lighting.turnOff();
    }
}

// Main Class
public class Facade1 {
    public static void main(String[] args) {
        SmartClass smartClass = new SmartClassroomFacade();

        smartClass.turnOn();
        System.out.println();
        smartClass.turnOff();
    }
}
