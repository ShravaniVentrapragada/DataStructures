#include<stdio.h>
int main()
{
int ch, array[100], n, c, d, swap,t;
 printf("Enter number of elements\n");
 scanf("%d", &n);
 printf("Enter %d integers\n", n);
 for (c = 0; c < n; c++)
 scanf("%d", &array[c]);
 printf("bubble sort:\n");
    for (c = 0 ; c < n - 1; c++)
  {
    for (d = 0 ; d < n - c - 1; d++)
    {
      if (array[d] > array[d+1]) 
      {
        swap       = array[d];
        array[d]   = array[d+1];
        array[d+1] = swap;
      }
    }
  }
 printf("Sorted list in ascending order:\n");
 for (c = 0; c < n; c++)
 printf("%d\n", array[c]);
 printf("\ninsertion sort\n");
  for (c = 1 ; c <= n - 1; c++) { d = c;
    while ( d > 0 && array[d-1] > array[d]) {
      t = array[d];
      array[d]   = array[d-1];
      array[d-1] = t;  d--;
} }
printf("Sorted list in ascending order:\n");                       
  for (c = 0; c <= n - 1; c++) {
    printf("%d\n", array[c]);
  } return 0;
}                  
 

