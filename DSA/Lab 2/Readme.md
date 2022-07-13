## Lab 2


1. Create a structure STUDENT consisting of variables of structures:


i. DOB {day, month (use pointer ), year},


ii. STU_INFO {reg_no, name(use pointer), address},


iii. COLLEGE {college_name (use pointer), university_name} where structure types from i to iii are declared outside the STUDENT independently. Show how to read and display member variables of DOB type if pointer variable is created for DOB inside STUDENT and STUDENT variable is also a pointer variable. The program should read and display the values of all members of STUDENT structure.


Note: You may use the following structure. 


struct DOB{ int day; char* mth; int year; } 


struct STU_INFO{ int reg_no; char* name; char[20] adrs; } 


struct COLLEGE{ char* clg_name; char[20] univ_name; } 


struct STUDENT{ struct DOB dob; struct STU_INFO stu_info; struct COLLEGE clg; } 


struct STUDENT student; char[10] month;


scanf(“%s”, month); student.dob.mth = (char*) malloc (sizeof (month); strcpy(student.dob.mth, month);


2. Write C programs using recursion to copy one string to another using Recursion.


3. Write C programs using recursion to check whether a given String is Palindrome or not, using Recursion


4. Write C programs using recursion to simulate the working of Tower of Hanoi for n disks. Print the number of moves.

