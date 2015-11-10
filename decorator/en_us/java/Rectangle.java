package java;

public class Rectangle extends PolygonDecorator {

    public Rectangle(float[] sides) {
        super(sides);
    }

    public void calculateArea() {

        float sides[] = this.getSides();
        float area = sides[0] * sides[1];

        System.out.println("Area = " + area);
    }
}
