import java.util.*;
class stack < T > {
    T[] stk = (T[]) new Object[20];
    static int max = 20;
    int top = -1;
    void push(T ele) {
        if (top == max) {
            System.out.println("Stack Overflow");
            return;
        }
        stk[++top] = ele;
    }
    T pop() {
        if (top == -1) {
            System.out.println("Stack Underflow");
        }
        return stk[top--];
    }
    void disp() {
        for (int i = top; i >= 0; i--) {
            System.out.print(stk[i].toString());
        }
        System.out.println();
    }
}
class Student {
    String first;
    String last;
    String email;
    int section;
    public Student(String first, String last, String email, int section) {
        this.first = first;
        this.last = last;
        this.email = email;
        this.section = section;
    }
    public String toString() {
        return section + " " + first + " " + last + " " + email + "\n";
    }
}
class Employee {
    String first;
    String last;
    String email;
    int empid;
    public Employee(String first, String last, String email, int empid) {
        this.first = first;
        this.last = last;
        this.email = email;
        this.empid = empid;
    }
    public String toString() {
        return empid + " " + first + " " + last + " " + email + "\n";
    }
}
public class l7q2 {
    public static void main(String[] args) {
        stack < Student > stu = new stack < Student > ();
        stack < Employee > emp = new stack < Employee > ();
        System.out.println("Student:");
        stu.push(new Student("Ayush", "Goyal", "abc@gmail.com", 1));
        stu.push(new Student("Anubhav", "Bagri", "xyz@gmail.com", 2));
        stu.push(new Student("Dipesh", "Singh", "ghi@gmail.com", 3));
        stu.disp();
        System.out.println("Popping once : ");
        stu.pop();
        stu.disp();
        System.out.println("Employee:");
        emp.push(new Employee("Malaya", "Khandelwal", "abc@def.com", 100));
        emp.push(new Employee("Dhruva", "Cahkro", "xyz@def.com", 200));
        emp.push(new Employee("Satyendra", "Mishra", "ghi@def.com", 300));
        emp.disp();
        System.out.println("Popping twice : ");
        emp.pop();
        emp.pop();
        emp.disp();
    }
}