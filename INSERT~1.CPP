//1. enter n elements in array and insert one element at given positions
#include <stdio.h>
#include<conio.h>
 
void main()
{
   int array[100], pos, i, n, value;

   printf("Enter number of elements in array\n");
   scanf("%d", &n);

   printf("Enter %d elements\n", n);

   for (i = 0; i < n; i++)
      scanf("%d", &array[i]);
 
   printf("Enter the location where you wish to insert an element\n");
   scanf("%d", &pos);
 
   printf("Enter the value to insert\n");
   scanf("%d", &value);
 
   for (i = n - 1; i >= pos - 1; i--)
      array[i+1] = array[i];

   array[pos-1] = value;

   printf("Resultant array is\n");

   for (i = 0; i <= n; i++)
      printf("%d\n", array[i]);

   getch();
}