#include <stdio.h>
int main() 
{
 int arr[100], n, i, key;
 int low, high, mid;
 printf("Enter the number of elements: ");
 scanf("%d", &n);
 printf("Enter the sorted elements:\n");
 for(i = 0; i < n; i++) 
 {
  scanf("%d", &arr[i]);
 }
 printf("Enter the element to search: ");
 scanf("%d", &key);

 low = 0;
 high = n - 1;

 while(low <= high) 
 {
  mid = (low + high) / 2;
  if(arr[mid] == key) 
  {
   printf("Element found at position %d", mid + 1);
   return 0;
  }
  else if(arr[mid] < key) 
  {
   low = mid + 1;
  }
  else 
  {
   high = mid - 1;
  }
 }
 printf("Element not found");
 return 0;
}
