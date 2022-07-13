#include <stdio.h>
#include <stdbool.h>
#define MAX 10
typedef struct
{
    int data[MAX];
    int top;
} stack;
void push(stack *s, int c)
{
    s->top++;
    s->data[s->top] = c;
}
int pop(stack *s)
{
    return (s->data[s->top--]);
}
void display(stack *s)
{
    int count = s->top;
    while (count > -1)
    {
        printf("%d", s->data[count--]);
    }
}
int main()
{
    stack st;
    stack *s = &st;
    s->top = -1;
    int n, r;
    printf("\nEnter decimal number : ");
    scanf("%d", &n);
    int q = n;
    while (q != 0)
    {
        r = q % 2;
        push(s, r);
        q = q / 2;
    }
    printf("\nEquivalent binary number is : ");
    display(s);
    printf("\n");
}