import java.util.*;

class Print {
	void prinTable(int n) {
		for (int i = 1; i <= 10; i++) {
			System.out.println(n + " X " + i + " = " + n * i);
		}
	}
}

class MxNTableThread extends Thread {
	int n;

	MxNTableThread(int n) {
		super("Multiplication table of " + n);
		this.n = n;
		start();
	}

	public void run() {
		System.out.println("Starting " + this.getName() + " thread...");
		Print t = new Print();
		t.prinTable(n);

		System.out.println("Ending " + this.getName() + " thread.");
	}
}

public class l6q1 {
	public static void main(String[] args) {
		MxNTableThread five = new MxNTableThread(5);
		MxNTableThread seven = new MxNTableThread(7);
	}
}