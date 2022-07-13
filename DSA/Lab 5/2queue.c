#include <stdio.h>
#include <stdlib.h>
#define MAX_QUEUE_SIZE1 3
#define MAX_QUEUE_SIZE2 3
#define MAX_QUEUE_SIZE 6
typedef struct
{
    int front1, rear1, front2, rear2;
    int array[MAX_QUEUE_SIZE1 + MAX_QUEUE_SIZE2];
} Queue;
void display1(Queue q)
{
    if (q.front1 == q.rear1)
    {
        printf("\nThe queue is empty, nothing to print");
    }
    else
    {
        printf("\n");
        for (int i = (q.front1 + 1) % MAX_QUEUE_SIZE1; i != (q.rear1 + 1) %
                                                                MAX_QUEUE_SIZE1;
             i = (i + 1) % MAX_QUEUE_SIZE1)
        {
            printf("%d\t", q.array[i]);
        }
    }
}
void display2(Queue q)
{
    if (q.front2 == q.rear2)
    {
        printf("\nThe queue is empty, nothing to print");
    }
    else
    {
        printf("\n");
        for (int i = (q.front2 + 1) % MAX_QUEUE_SIZE; i != (q.rear2 + 1) % MAX_QUEUE_SIZE;
             i = (i + 1) % MAX_QUEUE_SIZE)
        {
            printf("%d\t", q.array[i]);
        }
    }
}
void push1(Queue *q, int key)
{
    if ((q->rear1 + 1) % MAX_QUEUE_SIZE1 == q->front1)
    {
        printf("\nThe queue is full, cannot push");
    }
    else
    {
        q->rear1 = (q->rear1 + 1) % MAX_QUEUE_SIZE1;
        q->array[q->rear1] = key;
    }
}
void push2(Queue *q, int key)
{
    if (((q->rear2 + 1) % MAX_QUEUE_SIZE) + MAX_QUEUE_SIZE2 == q->front2)
    {
        printf("\nThe queue is full, cannot push");
    }
    else
    {
        q->rear2 = (q->rear2 + 1) % MAX_QUEUE_SIZE;
        q->array[q->rear2] = key;
    }
}
int pop1(Queue *q)
{
    int temp = q->array[(q->front1 + 1) % MAX_QUEUE_SIZE1];
    q->front1 = (q->front1 + 1) % MAX_QUEUE_SIZE1;
    return temp;
}
int pop2(Queue *q)
{
    int temp = q->array[(q->front2 + 1) % MAX_QUEUE_SIZE];
    q->front2 = (q->front2 + 1) % MAX_QUEUE_SIZE;
    return temp;
}
int main()
{
    Queue q;
    q.front1 = 0;
    q.rear1 = 0;
    q.front2 = MAX_QUEUE_SIZE2;
    q.rear2 = MAX_QUEUE_SIZE2;
    int ch = 0, ele;
    while (ch < 7)
    {
        printf("\n1 : Display Queue 1 \n2 : Display Queue 2 \n3 : Pop Queue 1 \n4 : Pop Queue 2 \n5 : Push an element in 1\n6 : Push an element in 2\n7 : Exit");
        printf("\nEnter the operation to be done: ");
        scanf("%d", &ch);
        switch (ch)
        {
        case 1:
            display1(q);
            break;
        case 2:
            display2(q);
            break;
        case 3:
            if (q.front1 == q.rear1)
            {
                printf("\nThis queue is empty");
            }
            else
            {
                ele = pop1(&q);
                printf("\nThe popped element is %d", ele);
            }
            break;
        case 4:
            if (q.front2 == q.rear2)
            {
                printf("\nThis queue is empty");
            }
            else
            {
                ele = pop2(&q);
                printf("\nThe popped element is %d", ele);
            }
            break;
        case 5:
            printf("\nEnter the element : ");
            scanf("%d", &ele);
            push1(&q, ele);
            break;
        case 6:
            printf("\nEnter the element : ");
            scanf("%d", &ele);
            push2(&q, ele);
            break;
        }
        printf("\n");
    }
    return 0;
}