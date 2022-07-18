import java.util.*;
import mypackages.p1.Maximum;

class l4q2 {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        Maximum A = new Maximum();
        int a, b, c, d;
        float a1, b1, c1, d1;
        int ar[] = new int[5];
        int arr[][] = new int[3][3];
        int d2, d3;
        System.out.println("Enter 3 integers : ");
        a = sc.nextInt();
        b = sc.nextInt();
        c = sc.nextInt();
        d = A.max(a, b, c);
        System.out.println("Maximum integer is " + d);
        System.out.println("Enter 3 floating values : ");
        a1 = sc.nextFloat();
        b1 = sc.nextFloat();
        c1 = sc.nextFloat();
        d1 = A.max(a1, b1, c1);
        System.out.println("Maximum float value is " + d1);
        System.out.println("Enter 5 integer values for 1D array: ");
        for (int i = 0; i < 5; ++i) {
            ar[i] = sc.nextInt();
        }
        d2 = A.max(ar);
        System.out.println("Maximum integer in 1D array is " + d2);
        System.out.println("Enter 9 int values for 2D array : ");
        for (int i = 0; i < 3; ++i) {
            for (int j = 0; j < 3; ++j) {
                arr[i][j] = sc.nextInt();
            }
        }
        d3 = A.max(arr);
        System.out.println("Maximum integer in 2D array is: " + d3);
    }
}