package java;

public class OmeletteRecipe implements RecipeCard {

    @Override
    public float getCalories() {
        return 300;
    }

    @Override
    public String getIngredients() {
        return " 3 Eggs, 2 pinches of Salt, 1 teaspoon of Baking Powder";
    }

}
