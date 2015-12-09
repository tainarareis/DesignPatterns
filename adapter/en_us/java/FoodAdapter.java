/**
 * File: FoodAdapter
 * Role: Adapter
 * Purpose: "Maps" the client interface to the adaptee interface.
 * So the client uses the new interface.
 */
public class FoodAdapter extends Food{

  // The adapter class "has a" instance of the adaptee class.
  private VeganFood veganFood;

  public FoodAdapter (VeganFood veganFood) {
    this.veganFood = veganFood;
  }

  @Override
  public void showIngredients() {
    System.out.println("[Vegan Food]\n");
    veganFood.showVeganIngredients();
  }

}
