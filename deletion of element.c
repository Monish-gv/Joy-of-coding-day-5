#include <stdio.h>
int main()
{
   int a[50], pos, c;
   
   printf("Enter the elements\n");
   for (c = 0; c < 10; c++)
   scanf("%d", &a[c]);
   
   printf("Enter the location of the element you wish to delete\n");
   scanf("%d", &pos);
   if (pos >= 11)
   printf("Deletion not possible.\n");
   else
   {
   for (c = pos - 1; c < 9; c++)
   a[c] = a[c+1];
   printf("Resultant array:\n");
   for (c = 0; c < 9; c++)
   printf("%d  ", a[c]);
   }
   
   return 0;
}
