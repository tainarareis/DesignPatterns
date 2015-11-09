import ShoppingCart;
import DefaultPurchase;

public class Main {

	/**
	 * Testing the Template Method Pattern...
	 */
	public static void main(String[] args) {
		ShoppingCart generic = new DefaultPurchase();
		generic.templateMethod();

	}

}
