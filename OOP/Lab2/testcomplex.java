import java.util.*;

class Complex {
    int real, ima;

    void setComplex(int a, int b) {
        real = a;
        ima = b;
    }

    void disp() {
        System.out.println(real + "+(" + ima + ")i");
    }

    Complex add(Complex a) {
        Complex temp = new Complex();
        temp.setComplex(a.real + real, a.ima + ima);
        return temp;
    }

    Complex sub(Complex a) {
        Complex temp = new Complex();
        temp.setComplex(Math.abs(a.real - real), Math.abs(a.ima - ima));
        return temp;
    }
}

public class testcomplex {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        System.out.println("Enter the real and imaginary parts of first number: ");
        int real = sc.nextInt();
        int ima = sc.nextInt();
        Complex n1 = new Complex();
        n1.setComplex(real, ima);
        n1.disp();
        System.out.println("Enter the real and imaginary parts of second number : ");
        real = sc.nextInt();
        ima = sc.nextInt();
        Complex n2 = new Complex();
        n2.setComplex(real, ima);
        n2.disp();
        System.out.println("Sum is : ");
        n1.add(n2).disp();
        System.out.println("Difference is : ");
        n1.sub(n2).disp();
        System.out.println();
    }
}