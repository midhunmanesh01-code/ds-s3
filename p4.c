#include <stdio.h>
int main() {
int a[10], b[10], c[10];
int n, i;
printf("Enter degree of polynomial: ");
scanf("%d", &n);
printf("Enter coefficients of first polynomial:\n");
for(i = 0; i <= n; i++)
 scanf("%d", &a[i]);
printf("Enter coefficients of second polynomial:\n");
for(i = 0; i <= n; i++)
 scanf("%d", &b[i]);
for(i = 0; i <= n; i++)
 c[i] = a[i] + b[i];
printf("Resultant polynomial:\n");
for(i = n; i >= 0; i--) {
 printf("%dx^%d", c[i], i);
 if(i != 0)
  printf("+");
}
printf("\n");
return 0;
}
