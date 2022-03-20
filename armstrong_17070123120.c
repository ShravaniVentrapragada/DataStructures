#include <stdio.h>
#include <math.h>
 
int Armstrong (int, int);
 
int main()
{
  int n, Sum = 0, a =0,temp;
 
  printf("\nPlease Enter n to Check for Armstrong \n");
  scanf("%d", &n);
  
  temp = n;
  while (temp != 0) 
   {
     a = a + 1;
     temp = temp / 10;
   }
 
  Sum = armstrong (n, a);
  printf("Sum of entered n is = %d\n", Sum);
 
  if ( n == Sum )
      printf("\n%d is Armstrong n.\n", n);
  else
      printf("%d is not the Armstrong n.\n", n);
 
  return 0;
}
 
int armstrong (int n, int a)
{
  static int Reminder, Sum = 0;
  
  if (n > 0)
   {
     Reminder = n %10;
     Sum = Sum + pow(Reminder, a);
     armstrong (n /10, a);
     return Sum;
   }
   else
     return 0;
}
