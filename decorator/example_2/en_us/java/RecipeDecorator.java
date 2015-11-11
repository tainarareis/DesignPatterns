package java;

/**
 * Abstract Decorator Class
 */
public abstract class RecipeDecorator implements RecipeCard {

    // Implementing the composition

    protected RecipeCard recipeCard;

    public RecipeDecorator(RecipeCard recipeCard) {
        this.recipeCard = recipeCard;
    }

    //
    public float getCalories() {
        return recipeCard.getCalories();
    }

    public String getIngredients() {
        return recipeCard.getIngredients();
    }

}
