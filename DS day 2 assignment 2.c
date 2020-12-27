/******************************************************************************



*******************************************************************************/
#include <stdio.h>

int main()
{
    int a[50],i,size,num,loc;
    printf("enter size: ");
    scanf("%d",&size);
    printf("enter elements of array:");
    for(i=0;i<size;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("enter the element u want to insert: ");
    scanf("%d",&num);
    printf("enter location: ");
    scanf("%d",&loc);
    for(i=size-1; i>=loc;i--)
    {
        a[i+1] = a[i];
        
    }
    a[loc] = num;
    size++;
    for(i=0; i<size; i++)
    {
        printf("%d ",a[i]);
    }
    
    
    
    return 0;
}
