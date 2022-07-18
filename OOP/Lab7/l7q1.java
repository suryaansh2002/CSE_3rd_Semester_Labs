public class l7q1 {
    static <T> void swap(T[] a, int i, int j) {
        T t = a[i];
        a[i] = a[j];
        a[j] = t;
    }

    public static void main(String[] args) {
        String a[] = { "I", "am", "Ayush" };
        System.out.println("Before swapping:");
        for (int i = 0; i < a.length; i++) {
            System.out.print(a[i] + " ");
        }
        System.out.println();
        swap(a, 0, 2);
        Integer b[] = { 1, 2, 3, 4, 5 };
        for (int i = 0; i < b.length; i++) {
            System.out.print(b[i] + " ");
        }
        swap(b, 1, 3);
        System.out.println("\nAfter swapping:");
        for (int i = 0; i < a.length; i++) {
            System.out.print(a[i] + " ");
        }
        System.out.println();
        for (int i = 0; i < b.length; i++) {
            System.out.print(b[i] + " ");
        }
        System.out.println();
    }
}