#include <stdio.h>
#include <stdlib.h>
#define MAX 5
typedef struct Stack
{
    int arr[MAX];
    int top;
} Stack;
int isEmpty(Stack *s)
{
    if (s->top == -1)
        return 1;
    return 0;
}
void push(Stack *s, int ch)
{
    if ((s->top + 1) < MAX)
        s->arr[++(s->top)] = ch;
    else
        printf("Overflow!\n");
}
int pop(Stack *s)
{
    if (isEmpty(s))
        return -1;
    return s->arr[(s->top)--];
}
int main()
{
    Stack s1, s2;
    s1.top = s2.top = -1;
    int ch, n;
    int i = 0;
    while (1)
    {
        printf("Enter:\n1 to Push\n2 to Pop\n3 to Display\n4 to Exit\nEnter your choice : ");
        scanf("%d", &ch);
        switch (ch)
        {
        case 1:
            printf("Enter the element you want to push : ");
            scanf("%d", &n);
            push(&s1, n);
            break;
        case 2:
            if (isEmpty(&s2))
            {
                while (!isEmpty(&s1))
                {
                    push(&s2, pop(&s1));
                }
                n = pop(&s2);
                if (n != -1)
                    printf("Popped : %d\n", n);
                else
                    printf("Underflow\n");
            }
            else
            {
                n = pop(&s2);
                if (n != -1)
                    printf("Popped : %d\n", n);
                else
                    printf("Underflow\n");
            }
            break;
        case 3:
            for (int i = 0; i < MAX; i++)
            {
                printf(" %d", s2.arr[i]);
            }
            printf("\n");
            break;
        case 4:
            exit(0);
        }
    }
    return 0;
}