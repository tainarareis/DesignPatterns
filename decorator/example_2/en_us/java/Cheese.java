package java;

public class Cheese extends RecipeDecorator {

    public Cheese(RecipeCard recipeCard) {
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