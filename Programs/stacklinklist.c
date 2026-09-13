#include <stdio.h>
#include <stdlib.h>

struct node
{
int data;
struct node *next;
};

int main()
{
struct node *top = NULL;
struct node *newnode, *temp;
int choice, value;

while (1)
{
printf("\n1. Push");
printf("\n2. Pop");
printf("\n3. Display");
printf("\n4. Exit");

printf("\nEnter your choice: ");
scanf("%d", &choice);

switch (choice)
{
case 1:
// Push
newnode = (struct node *)malloc(sizeof(struct node));

printf("Enter value: ");
scanf("%d", &value);

newnode->data = value;
newnode->next = top;
top = newnode;

printf("%d pushed into stack\n", value);
break;

case 2:
// Pop
if (top == NULL)
{
printf("Stack Underflow\n");
}
else
{
temp = top;
printf("%d popped from stack\n", top->data);
top = top->next;
free(temp);
}
break;

case 3:
// Display
if (top == NULL)
{
printf("Stack is Empty\n");
}
else
{                 
temp = top;

printf("Stack: ");

while (temp != NULL)
{
printf("%d ", temp->data);
temp = temp->next;
}

printf("\n");
}
break;

case 4:
return 0;

default:
printf("Invalid choice\n");
}
}

return 0;
}
