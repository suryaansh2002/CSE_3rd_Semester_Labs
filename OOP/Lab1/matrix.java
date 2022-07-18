import java.util.Scanner;

class matrix {

    public static int[][] add(int res[][], int a1[][], int a2[][]) {
        for (int i = 0; i < a1.length; i++) {
            for (int j = 0; j < a1[i].length; j++) {
                res[i][j] = a1[i][j] + a2[i][j];
            }

        }

        return res;

    }

    public static void main(String[] args) {

        Scanner sc = new Scanner(System.in);
        int row, col;

        System.out.println("Enter number of rows: ");
        row = sc.nextInt();

        System.out.println("Enter number of columns: ");
        col = sc.nextInt();

        int mat1[][] = new int[row][col];
        int mat2[][] = new int[row][col];
        int res[][] = new int[row][col];

        System.out.println("Enter elements of first matrix :\n ");

        for (int i = 0; i < row; i++) {

            for (int j = 0; j < col; j++) {

                mat1[i][j] = sc.nextInt();

            }

        }

        System.out.println("Enter elements of second matrix : \n");

        for (int i = 0; i < row; i++) {

            for (int j = 0; j < col; j++) {

                mat2[i][j] = sc.nextInt();

            }

        }

        add(res, mat1, mat2);

        System.out.println("Resultant Matrix : ");

        for (int i = 0; i < row; i++) {

            for (int j = 0; j < col; j++) {

                System.out.print(res[i][j] + " ");

            }

            System.out.println();

        }

    }

}