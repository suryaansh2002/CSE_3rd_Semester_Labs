import java.util.*;

class Time {
    int hours, minutes, seconds;

    void setTime(int hours, int minutes, int seconds) {
        this.hours = hours;
        this.minutes = minutes;
        this.seconds = seconds;
    }

    void disp() {
        System.out.println(hours + ":" + minutes + ":" + seconds);
    }

    Time add(Time a1) {
        Time a = new Time();
        int testSeconds = 0, testMinutes = 0, testHours = 0;
        testSeconds = a1.seconds + seconds;
        testMinutes = a1.minutes + minutes;
        testHours = a1.hours + hours;
        a.setTime(testHours, testMinutes, testSeconds);
        a.minutes += a.seconds / 60;
        a.seconds = a.seconds % 60;
        a.hours += a.minutes / 60;
        a.minutes = a.minutes % 60;
        return a;
    }

    Time subtract(Time a) {
        Time test = new Time();
        test.setTime((Math.abs(a.hours - hours)), (Math.abs(a.minutes - minutes)),
                Math.abs(a.seconds - seconds));
        return test;
    }

    public int isGreaterThan(Time a) {
        if (this.hours * 24 + this.minutes * 60 + this.seconds > a.hours * 24 + a.minutes * 60
                + a.seconds)
            return 1;
        else if (this.hours * 24 + this.minutes * 60 + this.seconds == a.hours * 24 + a.minutes
                * 60 + a.seconds)
            return 0;
        else
            return -1;
    }
}

public class timemain {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        System.out.println("Enter first time : ");
        int h, m, s;
        h = sc.nextInt();
        m = sc.nextInt();
        s = sc.nextInt();
        Time t1 = new Time();
        t1.setTime(h, m, s);
        t1.disp();
        System.out.println("Enter second time : ");
        h = sc.nextInt();
        m = sc.nextInt();
        s = sc.nextInt();
        Time t2 = new Time();
        t2.setTime(h, m, s);
        t2.disp();
        Time add = t1.add(t2);
        Time sub = t1.subtract(t2);
        System.out.println("Added time is : ");
        add.disp();
        System.out.println("Subtracted time is : ");
        sub.disp();
        if (t1.isGreaterThan(t2) == 1) {
            System.out.println("T1 is greater.");
        } else if (t1.isGreaterThan(t2) == 0) {
            System.out.println("Equal times.");
        } else {
            System.out.println("T2 is greater.");
        }
    }
}