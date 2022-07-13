#include <stdio.h>
#include <string.h>
#include <stdlib.h>
void copy(char str1[], char str2[], int i)
{
    str2[i] = str1[i];
    if (str1[i] == '\0')
        return;
    copy(str1, str2, ++i);
}
int main()
{
    char str1[100], str2[100];
    printf("Enter the string : ");
    scanf("%[^\n]s", str1);
    copy(str1, str2, 0);
    printf("\nString1 : %s\n", str1);
    printf("String2 : %s\n", str2);
    return 0;
}