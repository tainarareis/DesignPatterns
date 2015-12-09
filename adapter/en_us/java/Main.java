/**
 * File: Main
 * Role: Demonstration
 * Purpose: Demonstrates the Adapter Pattern utilization.
 */
public class Main{

  public static void main(String[] args) {

    PepperoniPizza pepperoniPizza = new PepperoniPizza();

    FoodAdapter broccoliPizzaAdapted = new FoodAdapter(new BroccoliPizza());

    Menu menu = new Menu();
    menu.addFood(pepperoniPizza);
    menu.addFood(broccoliPizzaAdapted);

    menu.showMenu();

  }

}
