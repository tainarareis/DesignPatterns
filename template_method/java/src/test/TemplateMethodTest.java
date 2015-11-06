package test;

import abstractPart.ShoppingCart;
import concretePart.DefaultPurchase;

public class TemplateMethodTest {

	/**
	 * Testing the Template Method Pattern...
	 */
	public static void main(String[] args) {
		ShoppingCart generic = new DefaultPurchase();
		generic.templateMethod();

	}

}
