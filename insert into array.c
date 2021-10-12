#include <stdio.h>
int main()
{
   int a[50], pos, c, val;
   printf("Enter the elements in the array\n");
   
   for (c = 0; c < 10; c++)
   scanf("%d", &a[c]);
   
   printf("Enter the location where you wish to insert an element\n");
   scanf("%d", &pos);
   printf("Enter the value to be inserted\n");
   scanf("%d", &val);
   
   for (c = 9; c >= pos - 1; c--)
   a[c+1] = a[c];
   a[pos-1] = val;
   
   printf("Resultant array is\n");
   for (c = 0; c <= 10; c++)
   printf("%d  ", a[c]);
   return 0;
}
