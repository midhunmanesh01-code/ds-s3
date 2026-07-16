#include<stdio.h>
int main()
{
int a[20][3],b[20][3],c[20][3],i,n;
printf("Enter number of non-zero elements: ");
scanf("%d",&n);
printf("Enter first sparse matrix (row col value):\n");
for(i=0;i<n;i++)
 scanf("%d%d%d",&a[i][0],&a[i][1],&a[i][2]);

printf("Enter second sparse matrix (row col value):\n");
for(i=0;i<n;i++)
 scanf("%d%d%d",&b[i][0],&b[i][1],&b[i][2]);

printf("\nResult:\n");
for(i=0;i<n;i++)
{
 c[i][0]=a[i][0];
 c[i][1]=a[i][1];
 c[i][2]=a[i][2]+b[i][2];
 printf("%d %d %d\n",c[i][0],c[i][1],c[i][2]);
}
return 0;
}
