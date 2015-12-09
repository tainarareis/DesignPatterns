/**
 * File: FoodAdapter
 * Role: Adapter
 * Purpose: "Maps" the client interface to the adaptee interface.
 * So the client uses the new interface.
 */
public class FoodAdapter implements Food{

  // The adapter class "has a" instance of the adaptee class.
  private VeganFood veganFood;

  public FoodAdapter (VeganFood veganFood) {
    this.veganFood = veganFood;
  }

  public void showIngredients() {
    System.out.println("[V E G A N    F O O D]");
    veganFood.showVeganIngredients();
  }

}
