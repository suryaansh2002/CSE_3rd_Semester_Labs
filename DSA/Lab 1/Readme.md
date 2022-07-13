## Lab 1


1. Write a function Smallest to find the smallest element in an array using pointer. Create a dynamically allocated array and read the values from keyboard in main. Display the result in the main function.


2. Implement a C program to read, display and to find the product of two matrices using functions with suitable parameters. Note that the matrices should be created using dynamic memory allocation functions and the elements are accessed using array dereferencing.


3. Samuel wants to store the data of his employees, which includes the following fields: (i) Name of the employee (ii) Date of birth which is a collection of {day, month, year} (iii) Address which is a collection of {house number, zip code and state}. Write a 'C' program to read and display the data of N employees using pointers to array of structures.

Note : You may use the following structure .

struct DOB {
int day, month, year;
}


struct ADRS {
int house_no;
long zipcode;
char state[20];
}


struct EMPLOYEE {
char name[20];
struct DOB dob;
struct ADRS address;
}


struct EMPLOYEE emp[10];
EMPLOYEE\* ptr = emp;
