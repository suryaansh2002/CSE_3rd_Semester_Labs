import java.util.Scanner;

class Student {
	int roll_no, marks;

	void putNumber(int a) {
		roll_no = a;
	}

	int getNumber() {
		return roll_no;
	}

	void putMarks(int a) {
		marks = a;
	}

	int getMarks() {
		return marks;
	}
}

interface Sports {
	public void putGrade();
}

class Result extends Student implements Sports {
	Result(int r, int m) {
		putMarks(m);
		putNumber(r);
	}

	public void putGrade() {
		System.out.println("The marks of Student " + getNumber() + " is " + getMarks());
	}
}

class l5q3 {
	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		int a, b;
		System.out.println("Enter Roll no of Student: ");
		a = sc.nextInt();
		System.out.println("Enter marks of Student in sportS: ");
		b = sc.nextInt();

		Result n = new Result(a, b);

		n.putGrade();

	}
}