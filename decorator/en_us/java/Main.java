/**
 * File: Main
 * Role: Demonstration
 * Purpose: Simulates the utilization of the Decorator Pattern.
 */

public class Main {

    public static void main(String[] args) {

        System.out.println("Calculate circle's circunference and area with radius 3:");
        Circle circle = new Circle(3);
        circle.calculateArea();
        circle.calculatePerimeter();

        float sides[] = {2, 4, 2, 4};
        System.out.println("\nCalculate rectangle's area and perimeter: ");
        printVector(sides);
        Rectangle rectangle = new Rectangle(sides);
        rectangle.calculateArea();
        rectangle.calculatePerimeter();

        System.out.println("\nVerify if the last figure is a regular polygon: ");
        printVector(sides);
        Regular notRegular = new Regular(sides);
        System.out.println("Is regular = " + notRegular.valid());

        float differentSides[] = {7, 7, 7, 7, 7, 7};
        System.out.println("\nVerify if the following polygon is regular : ");
        printVector(differentSides);
        Regular regular = new Regular(differentSides);
        System.out.println("Is regular = " + regular.valid());

    }

    /**
     * Simple print of vectors
     */
    public static void printVector(float sides[]) {

        int i = 0;
        for (float side : sides) {
            i++;
            System.out.print(side);
            if (sides.length != i) {
                System.out.print(", ");
            } else {
                System.out.println(".");
            }
        }
    }
}
