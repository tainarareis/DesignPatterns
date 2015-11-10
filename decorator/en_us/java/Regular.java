package java;

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
