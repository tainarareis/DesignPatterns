package concretePart;

import abstractPart.ShoppingCart;

/**
 * Concrete Class
 * Responsible for defining the default operations
 * of a purchase.
 *
 */
public class DefaultPurchase extends ShoppingCart {

    String userName = "Ada Lovelace";
    String userBirthdate = "10 de dezembro de 1815";
    String userAddress = "Road in South Kensington, London, SW7 2DD";

    public DefaultPurchase() {
        // TODO Auto-generated constructor stub
    }

    @Override
    public void registerUser() {
        System.out.println("Name: " +userName +
                            "\nBirthdate: " + userBirthdate +
                            "\NAddress: "+ userAddress);                            
    }

    @Override
    public void setDeliveryAdress() {
        System.out.println(userAdress);
    }

}
