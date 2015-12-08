/**
 * File: PolygonDecorator
 * Role: Decorator
 * Purpose: Describes properties of a certain class of objects,
 * Polygons have the same way to calculate perimeter.
 */
public class PolygonDecorator extends Geometric {

    private float[] sides;

    public float[] getSides() {
        return sides;
    }

    public void setSides(float[] sides) {
        this.sides = sides;
    }

    public PolygonDecorator(float[] sides) {
        this.setSides(sides);
    }

    @Override
    public void calculatePerimeter() {

        float perimeter = 0;

        for (float side : sides) {
            perimeter = perimeter + side;
        }

        System.out.println("Perimeter = " + perimeter);
    }
}
