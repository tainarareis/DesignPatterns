/**
 * File: Rectangle
 * Role: Concrete Decorator
 * Purpose: Defines the Rectangle particularities.
 * Concrete Decorator class override any Component {@see Geometric} method(s)
 * whose behavior needs to be modified. In this case it is calculateArea().
 */

public class Rectangle extends PolygonDecorator {

    public Rectangle(float[] sides) {
        super(sides);
    }

    @Override
    public void calculateArea() {

        float sides[] = this.getSides();
        float area = sides[0] * sides[1];

        System.out.println("Area = " + area);
    }
}
