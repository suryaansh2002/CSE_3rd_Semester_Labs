import java.util.*;

abstract class Figure {
    double dim1;
    double dim2;

    Figure(double d1, double d2) {
        dim1 = d1;
        dim2 = d2;
    }

    abstract double area();
}

class Rectangle extends Figure {
    Rectangle(double d1, double d2) {
        super(d1, d2);
    }

    double area() {
        return dim1 * dim2;
    }
}

class Triangle extends Figure {
    Triangle(double d1, double d2) {
        super(d1, d2);
    }

    double area() {
        return 0.5 * dim1 * dim2;
    }
}

class Square extends Figure {
    Square(double d1, double d2) {
        super(d1, d2);
    }

    double area() {
        return dim1 * dim1;
    }
}

class l4q3 {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        double dim1, dim2;
        System.out.println("Enter length and breadth of rectangle : ");
        dim1 = sc.nextDouble();
        dim2 = sc.nextDouble();
        Rectangle r = new Rectangle(dim1, dim2);
        Figure fig = r;
        System.out.println("The area of rectangle is " + fig.area());
        System.out.println("Enter height and base of a triangle : ");
        dim1 = sc.nextDouble();
        dim2 = sc.nextDouble();
        Triangle t = new Triangle(dim1, dim2);
        fig = t;
        System.out.println("The area of triangle is " + fig.area());
        System.out.println("Enter side of a square : ");
        dim1 = sc.nextDouble();
        Square s = new Square(dim1, dim1);
        fig = s;
        System.out.println("The area of square is " + fig.area());
    }
}