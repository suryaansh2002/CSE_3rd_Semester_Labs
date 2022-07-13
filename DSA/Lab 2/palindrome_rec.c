#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int palindromecheck(char str[], int i, int j)
{
    if (j > i)
    {
        if (str[i] == str[j])
        {
            return palindromecheck(str, i + 1, j - 1);
        }
        else
            return 0;
    }
    return 1;
}
int main()
{
    char str[100];
    printf("Enter the string : ");
    scanf("%[^\n]s", str);
    int l = strlen(str);
    int c = palindromecheck(str, 0, l - 1);
    if (c == 1)
        printf("\nString is palindrome.\n");
    else
        printf("\nString is not a palindrome.\n");
    return 0;
}