#include <stdio.h>
int main()
{
int a[10][3], t[10][3];
int i;
printf("Enter number of non-zero elements: ");
scanf("%d", &a[0][2]);
printf("Enter rows, columns and non-zero elements:\n");
scanf("%d%d%d", &a[0][0], &a[0][1], &a[0][2]);
printf("Enter row col value:\n");
for(i = 1; i <= a[0][2]; i++)
{
scanf("%d%d%d", &a[i][0], &a[i][1], &a[i][2]);
t[i][0] = a[i][1];
t[i][1] = a[i][0];
t[i][2] = a[i][2];
}
t[0][0] = a[0][1];
t[0][1] = a[0][0];
t[0][2] = a[0][2];
printf("\nTranspose:\n");
for(i = 0; i <= t[0][2]; i++)
printf("%d %d %d\n", t[i][0], t[i][1], t[i][2]);
return 0;
}
