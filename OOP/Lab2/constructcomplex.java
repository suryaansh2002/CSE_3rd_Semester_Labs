import java.util.Scanner;

class complex {
    int a, b;

    complex() {
        this.a = 0;
        this.b = 0;
    }

    complex(int a, int b) {
        this.a = a;
        this.b = b;
    }

    public static void disp(complex c) {
        if (c.b >= 0)
            System.out.println(c.a + " +i" + c.b);
        else
            System.out.println(c.a + " -i" + Math.abs(c.b));
    }

    public static complex add(complex c, complex d) {
        int temp1 = c.a + d.a;
        int temp2 = c.b + d.b;
        complex res = new complex(temp1, temp2);
        return res;
    }

    static complex sub(complex c, complex d) {
        int temp1 = c.a - d.a;
        int temp2 = c.b - d.b;
        complex res = new complex(temp1, temp2);
        return res;
    }
}

public class constructcomplex {
    public static void main(String[] args) {
        complex c = new complex(1, 2);
        complex d = new complex(-2, 5);
        complex res = new complex();
        res = complex.add(c, d);
        System.out.println("Sum is : ");
        complex.disp(res);
        res = complex.sub(c, d);
        System.out.println("Differnce is : ");
        complex.disp(res);
    }
}