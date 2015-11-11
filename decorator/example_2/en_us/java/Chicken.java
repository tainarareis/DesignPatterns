package java;

public class Chicken extends RecipeDecorator {

    public Chicken(RecipeCard recipeCard) {
        super(recipeCard);
    }

    @Override
    public float getCalories() {
        return recipeCard.getCalories() + 200;
    }

    @Override
    public String getIngredients() {
        return recipeCard.getIngredients() + ", Chicken.";
    }
}
