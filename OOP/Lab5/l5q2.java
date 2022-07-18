import java.util.*;

class CurrentDate {
    int day, month, year;

    CurrentDate() {
        System.out.println("\nNo Date Initialised.");
    }

    CurrentDate(int d, int m, int y) {
        day = d;
        month = m;
        year = y;
    }

    boolean checkmonth() {
        if (month < 1 || month > 12)
            return false;
        else
            return true;
    }

    boolean checkday() {
        boolean state;
        if (day < 1 || day > 31)
            state = false;
        else {
            switch (month) {
                case 1:
                case 3:
                case 5:
                case 7:
                case 8:
                case 10:
                case 12:
                    if (day > 31) {
                        state = false;
                    } else
                        state = true;
                    break;
                case 4:
                case 6:
                case 9:
                case 11:
                    if (day > 30) {
                        state = false;
                    } else
                        state = true;
                    break;
                case 2:
                    if (year % 4 != 0 && day > 28) {
                        state = false;
                    } else
                        return true;
                    if (day > 29) {
                        state = false;
                    }
                default:
                    state = false;
            }
        }
        return state;
    }
}

class InvalidDayException extends Exception {
    public InvalidDayException(String s) {
        super(s);
    }
}

class InvalidMonthException extends Exception {
    public InvalidMonthException(String s) {
        super(s);
    }
}

class l5q2 {
    static void createDate() {
        int d, m, y;
        Scanner sc = new Scanner(System.in);
        System.out.println("Enter year month day:");
        y = sc.nextInt();
        m = sc.nextInt();
        d = sc.nextInt();
        CurrentDate a = new CurrentDate(d, m, y);
        try {
            if (!a.checkmonth())
                throw new InvalidMonthException("Month is Invalid");
            if (!a.checkday())
                throw new InvalidDayException("Day is Invalid");
            System.out.println("\n" + a.day + "/" + a.month + "/" + a.year);
        } catch (InvalidMonthException e) {
            System.out.println(e);
        } catch (InvalidDayException e) {
            System.out.println(e);
        }
    }

    public static void main(String[] args) {
        createDate();
    }
}