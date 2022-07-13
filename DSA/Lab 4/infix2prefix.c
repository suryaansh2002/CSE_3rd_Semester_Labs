#define size 50
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
typedef struct
{
    char s[size];
    int top;
} STACK;
void push(STACK *s1, char elem)
{
    s1->top++;
    s1->s[s1->top] = elem;
}
char pop(STACK *s1)
{
    return s1->s[s1->top--];
}

int pre(char elem)
{
    switch (elem)
    {
    case '#':
        return 0;
    case '(':
        return 1;
    case '+':
    case '-':
        return 2;
    case '*':
    case '/':
        return 3;
    case '$':
        return 4;
    }
}
int main()
{
    STACK s1;
    s1.top = -1;
    char infix[50], prefix[50], revinf[50], revpref[50], elem, temp, ch;
    int i = 0, k = 0;
    printf("Enter infix expression\n");
    scanf("%s", infix);
    int len = strlen(infix);
    push(&s1, '#');
    for (i = len - 1; i >= 0; i--)
    {
        revinf[k] = infix[i];
        k++;
    }
    revinf[k] = '\0';
    i = 0, k = 0;
    while ((ch = revinf[i++]) != '\0')
    {
        switch (ch)
        {
        case ')':
            push(&s1, ch);
            break;
        case '(':
            while (s1.s[s1.top] != ')')
            {
                temp = pop(&s1);
                prefix[k++] = temp;
            }
            elem = pop(&s1);
            break;
        case '+':
        case '-':
        case '*':
        case '/':
            while (pre(s1.s[s1.top]) > pre(ch))
            {
                temp = pop(&s1);
                prefix[k++] = temp;
            }
            push(&s1, ch);
            break;
        case '$':
            if (s1.s[s1.top] == '$')
            {
                temp = pop(&s1);
                prefix[k++] = temp;
            }
            push(&s1, '$');
            break;
        default:
            prefix[k++] = ch;
        }
    }
    int m = 0;
    while (s1.s[s1.top] != '#')
    {
        temp = pop(&s1);
        prefix[k++] = temp;
    }
    prefix[k] = '\0';
    for (i = len - 1; i >= 0; i--)
    {
        revpref[m] = prefix[i];
        m++;
    }
    revpref[m] = '\0';
    printf("\n\nGiven Infix Expn: %s Prefix Expn: %s\n", infix, revpref);
    return 0;
}