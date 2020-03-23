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
    printf("Enter position of the element to be deleted");
    scanf("%d",&pos);
    
    
    for(i=pos;i<=n-1;i++)
    {
        a[i]=a[i+1];
        
    }
    
    n=n-1;
    
    printf("Array after deletion\n");
    for(i=0;i<n;i++)
    {
        printf("%d ",a[i]);
    }
    
    return 0;
}
