import ShoppingCart;

/**
 * In a objective purchase the user chooses not to register itself.
 */
public class ObjectivePurchase extends ShoppingCart {

	@Override
	public void registerUser() {
		// Do nothing
	}

	@Override
	public void setDeliveryAdress(){
		System.out.println("501 Auburn Ave NE, Atlanta, GA 30312, Estados Unidos")
	}

}
