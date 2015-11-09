public abstract class ShoppingCart {

	private double total;

	public final void templateMethod() {
		selectItems();
		calculateTotal();
		registerUser();
		setDeliveryAdress();
		realizePayment();
	}

	/**
	 * The methods selectItems, calculateTotal and realizePayment
	 * are settled up here but they can be implemented by the Concrete Parts also.
	 * For this context, it has a default behavior so its not needed to be
	 * overridden by the Concrete Parts.
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
		System.out.println("Payment realized.");
	}

	public double getTotal() {
		return total;
	}

	public void setTotal(double total) {
		this.total = +total;
	}

	/**
	 * The next methods should be implemented by the concrete parts.
	 */
	public abstract void registerUser();

	public abstract void setDeliveryAdress();
}
