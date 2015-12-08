/**
 * File: ShoppingCart
 * Role: Abstract Class
 * Purpose: Contains the template method.
 */


public abstract class ShoppingCart {

	private double total;

	/**
	 * Resposible for setting up the operations sequence
	 * in order to establish a reusable template.
	 */
	public final void templateMethod() {
		selectItems();
		calculateTotal();
		registerUser();
		setDeliveryAddress();
		realizePayment();
	}

	/**
	 * The methods registerUser and setDeliveryAdress should be implemented by the concrete parts.
	 */
	public abstract void registerUser();

	public abstract void setDeliveryAddress();


	/**
	 * Common methods.
	 */
	public void selectItems() {
		System.out.println("Beans Package added to the shopping cart.");
		setTotal(4.50);
		System.out.println("Popcorn added to the shopping cart.");
		setTotal(2.00);
	}

	public void calculateTotal() {
		System.out.println("Total: " + getTotal());
	}

	public void realizePayment() {
		System.out.println("Payment realized.\n\n");
	}

	public double getTotal() {
		return total;
	}

	public void setTotal(double value) {
		this.total = total + value;
	}

}
