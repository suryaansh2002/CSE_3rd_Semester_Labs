#include <stdio.h>
#define SIZE 10
int ar[SIZE];
int top1 = -1;
int top2 = SIZE;
void push_stack1(int data)
{
    if (top1 < top2 - 1)
    {
        ar[++top1] = data;
    }
    else
    {
        printf("Stack Full! Cannot Push\n");
    }
}
void push_stack2(int data)
{
    if (top1 < top2 - 1)
    {
        ar[--top2] = data;
    }
    else
    {
        printf("Stack Full! Cannot Push\n");
    }
}
void pop_stack1()
{
    if (top1 >= 0)
    {
        int popped_value = ar[top1--];
        printf("%d is being popped from Stack 1\n", popped_value);
    }
    else
    {
        printf("Stack Empty! Cannot Pop\n");
    }
}
void pop_stack2()
{
    if (top2 < SIZE)
    {
        int popped_value = ar[top2++];
        printf("%d is being popped from Stack 2\n", popped_value);
    }
    else
    {
        printf("Stack Empty! Cannot Pop\n");
    }
}
void print_stack1()
{
    int i;
    for (i = top1; i >= 0; --i)
    {
        printf("%d ", ar[i]);
    }
    printf("\n");
}
void print_stack2()
{
    int i;
    for (i = top2; i < SIZE; ++i)
    {
        printf("%d ", ar[i]);
    }
    printf("\n");
}
int main()
{
    int ar[SIZE];
    int i;
    for (i = 0; i <= 6; ++i)
    {
        push_stack1(i);
        printf("Value Pushed in Stack 1 is %d\n", i);
    }
    for (i = 1; i <= 4; ++i)
    {
        push_stack2(i);
        printf("Value Pushed in Stack 2 is %d\n", i);
    }
    // Print Both Stacks
    print_stack1();
    print_stack2();
    // Pushing on Stack Full
    printf("Pushing Value in Stack 1 is %d\n", 11);
    push_stack1(11);
    pop_stack1();
    return 0;
}