#include <stdio.h>
 int main()
{
  int array[100], search, c, n; int first, last, middle;
  printf("Enter number of elements in array\n");
  scanf("%d", &n);
  printf("Enter %d integer(s)\n", n);
for (c = 0; c < n; c++)
    scanf("%d", &array[c]);
 printf("Enter a number to search\n");
  scanf("%d", &search);
  printf("Sequential Search:\n");
  for (c = 0; c < n; c++)
  {
    if (array[c] == search)    /* If required element is found */
    {
      printf("%d is present at location %d.\n", search, c+1);
      break;
    }
  }
  if (c == n)
    printf("%d isn't present in the array.\n", search);
printf("Binary Search:\n");
first = 0; last = n - 1; middle = (first+last)/2;
 while (first <= last) {
      if (array[middle] < search)
         first = middle + 1;    
      else if (array[middle] == search) {
         printf("%d found at location %d.\n", search, middle+1); break;
      }
      else
         last = middle - 1; middle = (first + last)/2;
   }
   if (first > last)
printf("Not found! %d isn't present in the list.\n", search);
return 0;
}
