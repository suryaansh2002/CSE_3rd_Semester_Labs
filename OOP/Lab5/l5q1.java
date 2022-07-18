import java.util.*;

interface Series {
    public int getNext();

    public void reset();

    public void setStart(int a);
}

class ByTwos implements Series {
    int val;
    int start;

    ByTwos() {
        val = 0;
        start = 0;
    }

    public int getNext() {
        val += 2;
        return val;
    }

    public void reset() {
        val = start;
    }

    public void setStart(int a) {
        start = a;
        val = a;
    }
}

class ByFives implements Series {
    int val;
    int start;

    ByFives() {
        val = 0;
        start = 0;
    }

    public int getNext() {
        val += 5;
        return val;
    }

    public void reset() {
        val = start;
    }

    public void setStart(int a) {
        start = a;
        val = a;
    }
}

class l5q1 {
    public static void main(String args[]) {
        Scanner sc = new Scanner(System.in);
        ByTwos s = new ByTwos();
        Series var = s;
        System.out.print("Enter number of elements in byTwos series : ");
        int n = sc.nextInt();
        System.out.print("\nEnter starting number of series : ");
        int a = sc.nextInt();
        var.setStart(a);
        System.out.print("\nThe series is : \n" + a);
        for (int i = 0; i < n - 1; i++) {
            System.out.print(" " + var.getNext());
        }
        System.out.println("\nReseting...");
        var.reset();
        ByFives f = new ByFives();
        var = f;
        System.out.print("Enter number of elements in byFives series : ");
        n = sc.nextInt();
        System.out.print("\nEnter starting number of series : ");
        a = sc.nextInt();
        var.setStart(a);
        System.out.print("\nThe series is : \n" + a);
        for (int i = 0; i < n - 1; i++) {
            System.out.print(" " + var.getNext());
        }
        System.out.println("\nReseting...");
        var.reset();
    }
}