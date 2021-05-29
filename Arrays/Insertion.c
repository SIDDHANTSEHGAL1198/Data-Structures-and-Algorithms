#include <stdio.h>

int main()
{
    int n;
    printf("Enter size");
    scanf("%d",&n);
    
    int a[100];
    int i;
    
    printf("Enter array elements");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    
    int pos,num;
    printf("Enter position of the element to be inserted");
    scanf("%d",&pos);
    
    printf("Enter number to be inserted");
    scanf("%d",&num);
    
    for(i=n-1;i>=pos;i--)
    {
        a[i+1]=a[i];
        
    }
    
    a[pos]=num;
    n=n+1;
    
    printf("Array after insertion\n");
    for(i=0;i<n;i++)
    {
        printf("%d ",a[i]);
    }
    
    return 0;
}