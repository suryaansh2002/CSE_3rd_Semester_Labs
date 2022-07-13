#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define MAX 10
typedef struct
{
    char data[MAX];
    int top;
} stack;
void push(stack *s, char e)
{
    s->top++;
    s->data[s->top] = e;
}
char pop(stack *s)
{
    return (s->data[s->top--]);
}
int isPalindrome(stack *s, char str[])
{
    int l = strlen(str);
    int i, m = l / 2;
    for (i = 0; i < m; i++)
    {
        push(s, str[i]);
    }
    if (l % 2 != 0)
    {
        i++;
    }
    char e;
    while (str[i] != '\0')
    {
        e = pop(s);
        if (e != str[i])
            return 0;
        i++;
    }
    return 1;
}
int main()
{
    stack st;
    stack *s = &st;
    s->top = -1;
    char str[20];
    printf("\nEnter the string : ");
    scanf("%s", str);
    if (isPalindrome(s, str))
        printf("\nString is Palindrome.\n");
    else
        printf("\nString is not Palindrome.\n");
    return 0;
}