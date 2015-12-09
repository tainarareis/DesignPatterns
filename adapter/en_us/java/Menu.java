import java.util.List;
import java.util.ArrayList;
/**
 * File: Menu
 * Role: Client
 * Purpose: Client call methods on the Adapter object which redirects them into calls to the legacy component.
 */
public class Menu {

  private List<Food> foods = new ArrayList<Food>();

  /*	Insert a food-type object in the list.
   *  @param the food to be added.
 	 */
  public void addFood(Food food) {
    foods.add(food);
  }


  public List<Food> getAllFoods(){
    return foods;
  }

  /*
   * Shows every foods ingredients or advise if it is empty.
   */
  public void showMenu(){
    foods = getAllFoods();
    if(!foods.isEmpty()) {
      for(Food food: foods) {
        food.showIngredients();
      }
    } else {
        System.out.println("There is no food registered in this menu.");
    }
  }

}
