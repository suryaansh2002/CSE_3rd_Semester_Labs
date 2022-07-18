class Counter {
    static int n = 0;

    Counter() {
        System.out.println("Object Created");
        this.n++;
    }

    static void showCount() {
        System.out.println("Number of Objects : " + n);
    }
}

class testcounter {
    public static void main(String args[]) {
        Counter a = new Counter();
        Counter b = new Counter();
        Counter.showCount();
        Counter c = new Counter();
        Counter.showCount();
    }
}