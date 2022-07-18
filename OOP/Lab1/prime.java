import java.util.*;

public class prime {
	static boolean isPrime(int n) {
		if (n == 0 || n == 1) {
			return false;
		}
		int prime = 1;
		for (int i = 2; i <= (n / 2); i++) {
			if (n % i == 0) {
				prime = 0;
				break;
			}
		}
		if (prime == 1)
			return true;
		else

			return false;
	}

	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		System.out.println("Enter upper limit N: ");
		int n = sc.nextInt();
		int count = 0, i = 2;

		while (count < n) {
			if (isPrime(i)) {
				System.out.println(i);
				count++;
			}
			i++;
		}
	}
}