#include <stdio.h>

#define SIZE 5

int main()
{
int deque[SIZE];
int front = -1, rear = -1;
int choice, value, i;

while (1)
{
printf("\n1. Insert Front");
printf("\n2. Insert Rear");
printf("\n3. Delete Front");
printf("\n4. Delete Rear");
printf("\n5. Display");
printf("\n6. Exit");

printf("\nEnter your choice: ");
scanf("%d", &choice);

switch (choice)
{
case 1:
// Insert at Front
if ((rear + 1) % SIZE == front)
{
printf("Deque is Full\n");
}
else
{
printf("Enter value: ");
scanf("%d", &value);

if (front == -1)
{
front = rear = 0;
}
else
{
front = (front - 1 + SIZE) % SIZE;
}

deque[front] = value;
printf("%d inserted at front\n", value);
}
break;

case 2:
// Insert at Rear
if ((rear + 1) % SIZE == front)
{
printf("Deque is Full\n");
}
else
{
printf("Enter value: ");
scanf("%d", &value);

if (front == -1)
{
front = rear = 0;
}
else
{
rear = (rear + 1) % SIZE;
}

deque[rear] = value;
printf("%d inserted at rear\n", value);
}
break;

case 3:
// Delete from Front
if (front == -1)
{
printf("Deque is Empty\n");
}
else
{
printf("%d deleted from front\n", deque[front]);

if (front == rear)
{
front = rear = -1;
}
else
{
front = (front + 1) % SIZE;
}
}
break;

case 4:
// Delete from Rear
if (front == -1)
{
printf("Deque is Empty\n");
}
else
{
printf("%d deleted from rear\n", deque[rear]);

if (front == rear)
{
front = rear = -1;
}
else
{
rear = (rear - 1 + SIZE) % SIZE;
}
}
break;

case 5:
// Display
if (front == -1)
{
printf("Deque is Empty\n");
}
else
{
printf("Deque: ");

i = front;

while (1)
{
printf("%d ", deque[i]);

if (i == rear)
    break;

i = (i + 1) % SIZE;
}

printf("\n");
}
break;

case 6:
return 0;

default:
printf("Invalid choice\n");
}
}

return 0;
}
