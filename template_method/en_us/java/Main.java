/**
 * File: Main
 * Role: Demonstration
 * Purpose: Demonstrate the template pattern utilization.
 */
public class Main {

	public static void main(String[] args) {
		ShoppingCart default_purchase = new DefaultPurchase();
		default_purchase.templateMethod();

		ShoppingCart objective_purchase = new ObjectivePurchase();
		objective_purchase.templateMethod();
	}

}
