#include <stdio.h>
struct DOB
{
	int date, month, year;
};
struct ADRS
{
	int house_no;
	long zipcode;
	char state[20];
};
struct EMPLOYEE
{
	char name[20];
	struct DOB dob;
	struct ADRS address;
};
void read(struct EMPLOYEE *e)
{
	printf("\nEnter Employee Details : \n");
	printf("Name : ");
	scanf("%s", e->name);
	printf("DOB (dd mm yyyy): ");
	scanf("%d %d %d", &(e->dob.date), &(e->dob.month), &(e->dob.year));
	printf("Address : \n House No.:");
	scanf("%d", &(e->address.house_no));
	printf("Zipcode : ");
	scanf("%ld", &(e->address.zipcode));
	printf("State : ");
	scanf("%s", e->address.state);
}
void disp(struct EMPLOYEE *e)
{
	printf("\nName : %s \nDOB : %d/%d/%d \nAddress : %d , %s , %ld\n\n",
		   e->name, e->dob.date, e->dob.month, e->dob.year, e->address.house_no, e->address.state, e->address.zipcode);
}
int main()
{
	int n, i;
	struct EMPLOYEE emp[10];
	struct EMPLOYEE *ptr = emp;
	printf("Enter number of employees : ");
	scanf("%d", &n);
	for (i = 0; i < n; i++)
	{
		read(ptr + i);
	}
	printf("\n\nAll the details are : \n\n");
	for (i = 0; i < n; i++)
	{
		disp(ptr + i);
	}
	return 0;
}