#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define MAX_QUEUE_SIZE 10
typedef struct
{
    int front, rear;
    char array[MAX_QUEUE_SIZE];
} Queue;
void pushR(Queue *q, char key)
{
    if (q->rear == MAX_QUEUE_SIZE - 1)
    {
        printf("\nThe queue is full");
    }
    else
    {
        if (q->front == -1 && q->rear == -1)
        {
            q->front++;
        }
        q->array[++q->rear] = key;
    }
}
char popRight(Queue *q)
{
    char temp = q->array[q->rear];
    q->rear--;
    if (q->front > q->rear)
    {
        q->front = -1;
        q->rear = -1;
    }
    return temp;
}
char popLeft(Queue *q)
{
    char temp = q->array[q->front];
    q->front++;
    if (q->front > q->rear)
    {
        q->front = -1;
        q->rear = -1;
    }
    return temp;
}
int main()
{
    Queue q;
    q.front = q.rear = -1;
    char ele[100];
    printf("Enter your string : ");
    scanf(" %s", ele);
    int n = strlen(ele);
    for (int i = 0; i < n; i++)
    {
        pushR(&q, ele[i]);
    }
    n = n / 2;
    int p = 1;
    while (n--)
    {
        if (popLeft(&q) != popRight(&q))
        {
            p = 0;
            break;
        }
    }
    if (p)
    {
        printf("Palindrome\n");
    }
    else
    {
        printf("Not a Palindrome\n");
    }
    return 0;
}