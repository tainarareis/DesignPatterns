package java;

public class OliveOil extends RecipeDecorator {

    public OliveOil(RecipeCard recipeCard) {
        super(recipeCard);
    }

    @Override
    public float getCalories() {
        return recipeCard.getCalories() + 200;
    }

    @Override
    public String getIngredients() {
        return recipeCard.getIngredients() + ", Cheese.";
    }
}
