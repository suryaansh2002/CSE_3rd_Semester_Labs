#include <stdio.h>
#include <stdbool.h>
#define MAX 4
typedef struct
{
    char data[MAX];
    int top;
} stack;
bool isEmpty(stack *s)
{
    if (s->top == -1)
    {
        return true;
    }
    else
        return false;
}
bool isFull(stack *s)
{
    if (s->top == MAX - 1)
    {
        return true;
    }
    else
        return false;
}
void push(stack *s, char c)
{
    if (isFull(s))
    {
        printf("Stack is full.\n");
        return;
    }
    s->top++;
    s->data[s->top] = c;
}
char pop(stack *s)
{
    if (!isEmpty(s))
    {
        return (s->data[s->top--]);
    }
}
void display(stack *s)
{
    if (isEmpty(s))
    {
        printf("Stack is empty\n");
        return;
    }
    int count = s->top;
    while (count > -1)
    {
        printf("%c\n", s->data[count--]);
    }
}
int main()
{
    stack st;
    stack *s = &st;
    s->top = -1;
    int n = 0;
    char ch;
    do
    {
        printf("\nEnter:\t 1 to push \t 2 to pop\t3 to display\t4 to exit.");
        scanf("%d", &n);
        switch (n)
        {
        case 1:
            printf("Enter char to push : ");
            scanf(" %c", &ch);
            push(s, ch);
            break;
        case 2:
            pop(s);
            break;
        case 3:
            display(s);
            break;
        case 4:
            break;
        }
    } while (n != 4);
}