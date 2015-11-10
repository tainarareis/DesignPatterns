package java;

/**
 * Basic implementation of Geometric
 */
public class Circle extends Geometric {

    private float radius;

    /**
     * Needs a radius to be instantiated,
     * because all operations must use this property
     */
    public Circle(float radius) {
        this.setRadius(radius);
    }

    private void setRadius(float radius) {
        this.radius = radius;
    }

    private double getRadius() {
        return radius;
    }

    public void calculateArea() {
        double area = Math.PI * this.getRadius() * 2;
        System.out.println("Area = " + area);
    }

    public void calculatePerimeter() {
        double perimeter = 2 * Math.PI * this.getRadius();
        System.out.println("Perimeter = " + perimeter);
    }

}
