#include <stdio.h>    
int main()    
{    
    int a[8],c;
    int length = sizeof(a)/sizeof(a[0]);   
    
    printf("enter the elements for the array:\n");
    for(c=0;c<8;c++)
    scanf("%d",&a[c]);
    
    printf("the array is duplicate and the element is  \n");    
    for(int i = 0; i < length; i++) 
    { 
        for(int j = i + 1; j < length; j++) 
        {    
            if(a[i] == a[j])    
            printf("%d\n", a[j]);    
        }    
    }    
    return 0;    
}  
