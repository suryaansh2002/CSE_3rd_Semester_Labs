#include <stdio.h>

#include <stdlib.h>

#include <string.h>

#define max_size 10
#define max_str 20
typedef struct
{
   char **arr;
   int front, rear;
} QUE;
void initialize(QUE *cq)
{
   int i;
   cq->front = -1;
   cq->rear = -1;
   cq->arr = malloc(sizeof(char *) * max_size);
   for (i = 0; i < max_size; i++)
   {
      cq->arr[i] = malloc(sizeof(char) * max_str);
   }
}
void insertcq(QUE *cq, char *str)
{
   if (cq->front == cq->rear && cq->rear == -1)
   {
      cq->rear = cq->front = 0;
      strcpy(cq->arr[cq->rear], str);
      return;
   }
   if (cq->front == ((cq->rear) + 1) % max_size)
   {
      printf("Queue is full\n");
      return;
   }
   cq->rear = ((cq->rear) + 1) % max_size;
   strcpy(cq->arr[cq->rear], str);
}
void deletecq(QUE *cq)
{
   char *ele;
   if (cq->front == cq->rear)
   {
      printf("Queue underflow\n");
      return;
   }
   else
   {
      ele = cq->arr[cq->front];
      printf("Deleted string: %s\n", ele);
      cq->front = ((cq->front) + 1) % max_size;
   }
}
void display(QUE *cq)
{
   int i;
   if (cq->rear == cq->front)
   {
      printf("Queue is empty\n");
      return;
   }
   else
   {
      for (i = cq->front; i != cq->rear; i = (i + 1) % max_size)
      {
         printf("%s ", cq->arr[i]);
      }
      printf("%s\n", cq->arr[i]);
   }
}
int main()
{
   QUE cq;
   initialize(&cq);
   int ch;
   char x[max_str];
   do
   {
      printf("\n1.Insert\n2.Delete\n3.Display\n4.Exit\n");
      printf("Enter your choice\n");
      scanf("%d", &ch);
      switch (ch)
      {
      case 1:
         printf("Enter a string\n");
         scanf("%s", x);
         insertcq(&cq, x);
         break;
      case 2:
         deletecq(&cq);
         break;
      case 3:
         display(&cq);
         break;
      case 4:
         exit(5);
      }
   } while (ch != 4);
   return 0;
}
