#include <stdio.h>
#include <stdlib.h>
int toh(int n, char s, char d, char t)
{
    static int count = 0;
    count++;
    if (n == 1)
        return count;
    toh(n - 1, s, d, t);
    toh(n - 1, t, s, d);
}
int main()
{
    int n, m;
    printf("Enter the number of disks for ToH : ");
    scanf("%d", &n);
    char s = 'a', d = 'b', t = 'c';
    m = toh(n, s, d, t);
    printf("\nNumber of moves required are : %d\n", m);
    return 0;
}