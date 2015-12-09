/**
 * File: PepperoniPizza
 * Role: Concrete Target
 * Purpose: Doesn't need adaptation.
 */
public class PepperoniPizza implements Food {

  public void showIngredients () {
    System.out.println("[PEPPERONI PIZZA]\n" +
			"Ingredients:\n" +
			"\t Turkey pepperoni slices;\n" +
			"\t Tomato-and-basil pasta sauce;\n" +
			"\t Mozzarella cheese;\n" +
			"\t Crusty pizza dough.\n");
  }

}
