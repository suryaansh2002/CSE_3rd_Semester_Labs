#include <stdio.h>
#include <stdlib.h>
typedef struct node
{
    int data;
    struct node *next;
} * NODE;
NODE enqueue(NODE first, int ele)
{
    NODE temp = (NODE)malloc(sizeof(struct node));
    temp->data = ele;
    if (first == NULL)
    {
        return temp;
    }
    else
    {
        NODE m = first;
        while (m->next != NULL)
        {
            m = m->next;
        }
        m->next = temp;
        return first;
    }
}
NODE dequeue(NODE first)
{
    if (first == NULL)
    {
        printf("\nQueue empty\n");
        return NULL;
    }
    else if (first->next == NULL)
    {
        printf("\nDequeue:\t%d\n", first->data);
        free(first);
        return NULL;
    }
    else
    {
        NODE temp = first;
        first = first->next;
        printf("\nDequeue\t%d\n", temp->data);
        free(temp);
        return first;
    }
}
void display(NODE first)
{
    if (first == NULL)
    {
        printf("\nQueue empty\n");
    }
    else
    {
        NODE temp = first;
        while (temp->next != NULL)
        {
            printf("%d ", temp->data);
            temp = temp->next;
        }
        printf("%d\n", temp->data);
    }
}
int main()
{
    NODE first = NULL;
    int ch, ele;
    while (1)
    {
        printf("\n1.Enqueue 2.Dequeue 3.Display 4.Exit\nEnter choice : ");
        scanf("%d", &ch);
        switch (ch)
        {
        case 1:
            printf("Enter element to Queue: ");
            scanf("%d", &ele);
            first = enqueue(first, ele);
            break;
        case 2:
            first = dequeue(first);
            break;
        case 3:
            display(first);
            break;
        case 4:
            printf("\nExiting...");
            return 0;
        }
    }
}