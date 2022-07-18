import java.util.*;

class Matrix implements Runnable {
    Thread t;
    int arr[];
    int sum;
    int a;

    Matrix(int arr[], int n) {
        t = new Thread(this, "row sum thread");
        this.arr = arr;
        sum = 0;
        a = n;
        t.start();
    }

    public void run() {
        System.out.println("Starting sum for row" + a);
        for (int i = 0; i < arr.length; i++) {
            sum += arr[i];
        }
        System.out.println("Finished sum for row" + a + " is " + sum);
    }
}

public class l6q2 {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        System.out.println("Enter the dimensions of matrix : ");
        int row = sc.nextInt();
        int col = sc.nextInt();
        int[][] arr = new int[row][col];
        System.out.println("Enter the elements of the matrix : ");
        for (int i = 0; i < row; i++) {
            for (int j = 0; j < col; j++) {
                arr[i][j] = sc.nextInt();
            }
        }
        Matrix[] a = new Matrix[row];
        for (int i = 0; i < row; i++) {
            a[i] = new Matrix(arr[i], i);
        }
        for (int i = 0; i < row; i++) {
            try {
                a[i].t.join();
            } catch (Exception exc) {
                System.out.println("Interrupted");
            }
        }
        int sum = 0;
        for (int i = 0; i < row; i++) {
            sum += a[i].sum;
        }
        System.out.println("The sum is : " + sum);
    }
}