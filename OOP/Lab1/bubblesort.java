import java.util.*;

public class bubblesort {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        System.out.println("Enter the size :");
        int n = sc.nextInt();
        int[] arra = new int[n];
        System.out.println("Enter the elements :");
        for (int i = 0; i < n; i++) {
            arra[i] = sc.nextInt();
        }
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n - i - 1; j++) {
                if (arra[j] > arra[j + 1]) {
                    int temp = arra[j];
                    arra[j] = arra[j + 1];
                    arra[j + 1] = temp;
                }
            }
        }

        System.out.println("The sorted ascending array is:");
        for (int i = 0; i < n; i++) {
            System.out.print(arra[i] + " ");
        }
        System.out.println();
    }
}