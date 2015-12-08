/**
 * File: DefaultPurchase
 * Role: Concrete Class
 * Purpose: Responsible for defining the default operations of a purchase.
 *
 */
public class DefaultPurchase extends ShoppingCart {

	private String userName = "Ada Lovelace";
	private String userBirthdate = "10 de dezembro de 1815";
	private String userAddress = "Road in South Kensington, London, SW7 2DD";

  /**
	 * In a default purchase it is necessary to register a new user.
	 */
	@Override
	public void registerUser() {
		System.out.println("Name: " +userName +
			"\nBirthdate: " + userBirthdate +
			"\nAddress: "+ userAddress);
	}

 /**
  * The user adress is recovered.
	*/
	@Override
	public void setDeliveryAddress() {
		System.out.println("Delivery Address: " + userAddress);
	}

}
