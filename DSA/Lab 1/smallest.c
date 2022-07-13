#include <stdio.h>
#include <stdlib.h>

int smallest(int *arr, int n)
{
    int *s, *l, *i;
    l = arr + n - 1;
    s = arr;
    for (i = arr + 1; i <= l; i++)
    {
        if (*i < *s)
            s = i;
    }
    return *s;
}
int main()
{
    int n;
    printf("Enter size of array : ");
    scanf("%d", &n);
    int *arr = (int *)calloc(n, sizeof(int));
    int i;
    printf("\nEnter Elements : \n");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    int s = smallest(arr, n);
    printf("Smallest number is : %d\n", s);
    return 0;
}