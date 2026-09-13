#include <stdio.h>

int main()
{
int stack[20];
int top1 = -1, top2 = 20;
int choice, value;

while (1)
{
printf("\n--- MULTISTACK ---\n");
printf("1. Push in Stack 1\n");
printf("2. Push in Stack 2\n");
printf("3. Pop from Stack 1\n");
printf("4. Pop from Stack 2\n");
printf("5. Display Stack 1\n");
printf("6. Display Stack 2\n");
printf("7. Exit\n");

printf("Enter your choice: ");
scanf("%d", &choice);

switch (choice)
{
case 1:
if (top1 + 1 == top2)
printf("Stack Overflow\n");
else
{
printf("Enter value: ");
scanf("%d", &value);
stack[++top1] = value;
}
break;

case 2:
if (top1 + 1 == top2)
printf("Stack Overflow\n");
else
{
printf("Enter value: ");
scanf("%d", &value);
stack[--top2] = value;
}
break;

case 3:
if (top1 == -1)
printf("Stack 1 Underflow\n");
else
{
printf("Deleted element: %d\n", stack[top1--]);
}
break;

case 4:
if (top2 == 20)
printf("Stack 2 Underflow\n");
else
{
printf("Deleted element: %d\n", stack[top2++]);
}
break;

case 5:
if (top1 == -1)
printf("Stack 1 is empty\n");
else
{
printf("Stack 1: ");
for (int i = top1; i >= 0; i--)
printf("%d ", stack[i]);
printf("\n");
}
break;

case 6:
if (top2 == 20)
printf("Stack 2 is empty\n");
else
{
printf("Stack 2: ");
for (int i = top2; i < 20; i++)
printf("%d ", stack[i]);
printf("\n");
}
break;

case 7:
return 0;

default:
printf("Invalid choice\n");
}
}

return 0;
}
