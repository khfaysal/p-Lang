interface OrderTask {
    void execute(String productId, double amount);
}

class InventoryTask implements OrderTask {
    @Override
    public void execute(String productId, double amount) {
        System.out.println("Checking stock for " + productId);
    }
}

class PaymentTask implements OrderTask {
    @Override
    public void execute(String productId, double amount) {
        System.out.println("Processing payment: Tk " + amount);
    }
}

class ShippingTask implements OrderTask {
    @Override
    public void execute(String productId, double amount) {
        System.out.println("Shipping product: " + productId);
    }
}

class OrderFacade {
    private OrderTask inventory;
    private OrderTask payment;
    private OrderTask shipping;

    public OrderFacade() {
        this.inventory = new InventoryTask();
        this.payment = new PaymentTask();
        this.shipping = new ShippingTask();
    }

    // Unified Simple Method
    public void placeOrder(String productId, double amount) {
        System.out.println("Order Started");
        inventory.execute(productId, amount);
        payment.execute(productId, amount);
        shipping.execute(productId, amount);
        System.out.println("Order Completed Successfully!");
    }
}

public class Facade {
    public static void main(String[] args) {
        OrderFacade order = new OrderFacade();
        order.placeOrder("PROD-999", 3500.00);
    }
}
