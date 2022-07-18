import java.util.*;

class Student {
    static int count = 0;
    int reg_no;
    String FullName;
    GregorianCalendar doj = new GregorianCalendar();
    short sem;
    float GPA;
    float CGPA;
    int cnt;

    Student() {
        reg_no = 0;
        FullName = "";
        sem = 0;
        GPA = 0;
        CGPA = 0;
        doj = new GregorianCalendar(2000, 1, 1);
        count++;
        cnt = count;
    }

    Student(int year, int month, int date, String name, short semester, float gpa, float cgpa) {
        FullName = name;
        sem = semester;
        GPA = gpa;
        CGPA = cgpa;
        doj = new GregorianCalendar(year, month, date);
        count++;
        cnt = count;
        int yr = doj.get(Calendar.YEAR) % 100;
        reg_no = yr * 100 + cnt;
    }

    void display() {
        System.out.print("Registration number:" + reg_no + "\t");
        System.out.print("Full Name:" + FullName + "\t");
        System.out.print("Semester:" + sem + "\t");
        System.out.print("GPA:" + GPA + "\t");
        System.out.print("CGPA:" + CGPA + "\t");
        System.out.print("Date of join:" + doj.get(Calendar.DATE) +
                "/" + doj.get(Calendar.MONTH) + "/" + doj.get(Calendar.YEAR) + "\n");
    }

    public static void sort(Student stud[]) {
        for (int i = 0; i < stud.length; i++) {
            for (int j = 0; j < stud.length - i - 1; j++) {
                if (stud[j].FullName.compareTo(stud[j + 1].FullName) > 0) {
                    Student temp = stud[j];
                    stud[j] = stud[j + 1];
                    stud[j + 1] = temp;
                }
            }
        }

    }

    public static void check(Student stud[], String s) {
        for (int i = 0; i < stud.length; i++) {

            if (stud[i].FullName.indexOf(s) != -1) {
                stud[i].display();
            }
        }

    }

}

class l3 {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        Student stud[] = new Student[5];
        int i, regNo, date, month, year;
        String Name;
        short sem;
        float gpa, cgpa;
        for (i = 0; i < 5; ++i) {
            System.out.println("Enter details for student " + (i + 1) + ":");
            System.out.print("Enter Name : ");
            Name = sc.next();
            System.out.print("Enter semester : ");
            sem = sc.nextShort();
            System.out.print("Enter GPA : ");
            gpa = sc.nextFloat();
            System.out.print("Enter CGPA : ");
            cgpa = sc.nextFloat();
            System.out.print("Enter date of joining : ");
            date = sc.nextInt();
            System.out.print("Month of joining : ");
            month = sc.nextInt();
            System.out.print("Year of joining : ");
            year = sc.nextInt();
            System.out.println();
            stud[i] = new Student(year, month, date, Name, sem, gpa, cgpa);
        }
        for (i = 0; i < 5; ++i) {
            stud[i].display();
            System.out.println();
        }
        Student.sort(stud);
        System.out.println("Sorted By Full name-");
        for (i = 0; i < 5; ++i) {
            stud[i].display();
            System.out.println();
        }

        System.out.println();
        Student.check(stud, "s");
    }
}