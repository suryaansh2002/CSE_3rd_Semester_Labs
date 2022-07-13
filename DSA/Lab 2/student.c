#include <stdio.h>
#include <string.h>
#include <stdlib.h>
struct DOB
{
    int day;
    char *month;
    int year;
};
struct STU_INFO
{
    int reg_no;
    char *name;
    char adrs[20];
};
struct COLLEGE
{
    char *clg_name;
    char univ_name[20];
};
struct STUDENT
{
    struct DOB *dob;
    struct STU_INFO stu_info;
    struct COLLEGE clg;
};
int main()
{
    struct STUDENT *stu = (struct STUDENT *)malloc(sizeof(struct STUDENT));
    stu->dob = (struct DOB *)malloc(sizeof(struct DOB));
    stu->dob->month = (char *)malloc(sizeof(char) * 10);
    stu->stu_info.name = (char *)malloc(sizeof(char) * 20);
    stu->clg.clg_name = (char *)malloc(sizeof(char) * 50);
    printf("Enter Details of Student:\n");
    printf("Registration Number:\t");
    scanf("%d", &(stu->stu_info.reg_no));
    printf("Name:\t");
    scanf(" %s", stu->stu_info.name);
    printf("Address:\t");
    scanf(" %[^\n]s", stu->stu_info.adrs);
    printf("Date of Birth (DD MONTH YYYY):\t");
    scanf("%d", &(stu->dob->day));
    scanf(" %s", stu->dob->month);
    scanf("%d", &(stu->dob->year));
    printf("College Name:\t");
    scanf(" %s", stu->clg.clg_name);
    printf("University Name:\t");
    scanf(" %s", stu->clg.univ_name);
    printf("\nStudent Details\n\n Registration Number:\t%d\nName:\t%s\nAddress:\t%s\nDate of Birth:\t%d %s %d\nCollege Name:\t%s\nUniversity Name:\t%s\n\n", stu->stu_info.reg_no, stu->stu_info.name, stu->stu_info.adrs, stu->dob->day, stu->dob->month, stu->dob->year, stu->clg.clg_name, stu->clg.univ_name);
}