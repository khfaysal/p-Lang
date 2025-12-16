public interface DeviceMode {
    void handlePowerButton(DeviceContext device);
}

public class ActiveMode implements DeviceMode {
    @Override
    public void handlePowerButton(DeviceContext device) {
        System.out.println("DEVICE: Device is turning OFF.");
        device.setCurrentMode(new InactiveMode());
    }
}

public class InactiveMode implements DeviceMode {
    @Override
    public void handlePowerButton(DeviceContext device) {
        System.out.println("DEVICE: Device is turning ON.");
        device.setCurrentMode(new ActiveMode());
    }
}

public class DeviceContext {
    private DeviceMode currentMode;

    public DeviceContext() {
        // Initial mode is OFF
        this.currentMode = new InactiveMode();
        System.out.println("SETUP: Initial Mode is OFF.");
    }

    public void setCurrentMode(DeviceMode newMode) {
        this.currentMode = newMode;
    }

    public void pressPowerButton() {
        System.out.println("--- Power Button Pressed ---");
        currentMode.handlePowerButton(this);
    }
}

public class DeviceContext {
    private DeviceMode currentMode;

    public DeviceContext() {
        this.currentMode = new InactivetMode();
        System.out.println("SETUP: Initial Mode is OFF.");
    }

    public void setCurrentMode(DeviceMode newMode) {
        this.currentMode = newMode;
    }

    public void pressPowerButton() {
        System.out.println("--- Power Button Pressed ---");
        currentMode.handlePowerButton(this);
    }
}

public class State {
    public static void main(String[] args) {
        DeviceContext remote = new DeviceContext();
        // 1. Initial State: OFF (DormantMode)
        remote.pressPowerButton();
        // 2. New State: ON (ActiveMode)
        remote.pressPowerButton();
        // 3. New State: OFF (DormantMode)
        remote.pressPowerButton();
    }
}