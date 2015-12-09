/**
 * File: BroccoliPizza
 * Role: Concrete Adaptee
 * Purpose: Implements the Adaptee methods with particularities.
 */
public class BroccoliPizza implements VeganFood {

  public void showVeganIngredients (){
      System.out.println("[BROCCOLI PIZZA]\n"+
                  			"* CERTIFIED VEGAN FOOD *\n" +
                  			"Ingredients:\n" +
                  			"\t Broccoli florets;\n" +
                  			"\t Sun-dried tomatoes;\n" +
                  			"\t Vegan tomato sauce;\n" +
                  			"\t Vegan cheddar cheese;\n" +
                  			"\t Vegan pizza dough.\n");
  }


}
