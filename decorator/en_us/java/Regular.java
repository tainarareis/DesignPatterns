/**
 * File: Regular
 * Role: Concrete Decorator
 * Purpose: Defines the Regular figure particularities.
 * Concrete Decorator class override any Component {@see Geometric} method(s)
 * whose behavior needs to be modified. In this case it is calculateArea().
 */
public class Regular extends PolygonDecorator {

    public Regular(float[] sides) {
        super(sides);
    }

    public boolean valid() {
        float sides[] = this.getSides();

        for (float side : sides) {
            if (side != sides[0]) {
                return false;
            } else {
                // do nothing
            }
        }
        // If all sides are equals
        return true;
    }
}
