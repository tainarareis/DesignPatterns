package java;

public class Main {

    public static void main(String[] args) {

        System.out.println("Simple Omellete:");
        RecipeCard omeletteRecipe = new OmeletteRecipe();
        System.out.println("Calories = " + omeletteRecipe.getCalories());
        System.out.println("Ingredients = " + omeletteRecipe.getIngredients());

        System.out.println("\nOmelette with Chicken:");
        RecipeCard chickenOmeletteRecipe = new Chicken(new OmeletteRecipe());
        System.out.println("Calories = " + chickenOmeletteRecipe.getCalories());
        System.out.println("Ingredients = " + chickenOmeletteRecipe.getIngredients());

        System.out.println("\nOmelette with OliveOil:");
        RecipeCard oliveOilOmeletteRecipe = new OliveOil(new OmeletteRecipe());
        System.out.println("Calories = " + oliveOilOmeletteRecipe.getCalories());
        System.out.println("Ingredients = " + oliveOilOmeletteRecipe.getIngredients());

        System.out.println("\nOmelette with Cheese:");
        RecipeCard cheeseOmeletteRecipe = new Cheese(new OmeletteRecipe());
        System.out.println("Calories = " + cheeseOmeletteRecipe.getCalories());
        System.out.println("Ingredients = " + cheeseOmeletteRecipe.getIngredients());
    }

}
