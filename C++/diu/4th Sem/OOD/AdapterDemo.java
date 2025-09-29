
interface Pizza {

    void toppings();

    void bun();
}

class DhakaStylePizza implements Pizza {

    @Override
    public void toppings() {
        System.out.println("Adding beef toppings for Dhaka-style pizza.");

    }

    @Override
    public void bun() {
        System.out.println("Using thick crust for Dhaka-style pizza.");
    }
}

class SylhetStylePizza implements Pizza {

    @Override
    public void toppings() {
        System.out.println("Adding spicy chicken toppings for Sylhet-style pizza.");

    }

    @Override
    public void bun() {
        System.out.println("Using thin crust for Sylhet-style pizza.");

    }

}

class ChittagongPizza {

    public void sausage() {
        System.out.println("Adding sausage toppings for Chittagong pizza.");

    }

    public void bread() {
        System.out.println("Using soft bread for Chittagong pizza.");

    }

}

class ChittagongPizzaAdapter extends ChittagongPizza implements Pizza {

    @Override
    public void toppings() {
        this.sausage(); // Adapting sausage() to work as toppings()

    }

    @Override
    public void bun() {
        this.bread(); // Adapting bread() to work as bun()

    }

}

public class AdapterDemo {

    public static void main(String[] args) {
        // Dhaka and Sylhet pizzas (Direct implementation of Pizza)
        Pizza dhakaPizza = new DhakaStylePizza();
        Pizza sylhetPizza = new SylhetStylePizza();

        System.out.println("Serving Dhaka Style Pizza:");
        dhakaPizza.toppings();
        dhakaPizza.bun();

        System.out.println("\nServing Sylhet Style Pizza:");
        sylhetPizza.toppings();
        sylhetPizza.bun();

        // Chittagong pizza (Uses adapter)
        Pizza chittagongPizza = new ChittagongPizzaAdapter();

        System.out.println("\nServing Chittagong Style Pizza:");
        chittagongPizza.toppings(); // Calls sausage()
        chittagongPizza.bun();

        // Calls bread()
    }
}
