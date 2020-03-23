#include <stdio.h>

int main()
{
    int n;
    printf("Enter size");
    scanf("%d",&n);
    
    int a[100];
    int i;
    printf("Enter array elements\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    
    printf("Enter element to be searched");
    int search;
    scanf("%d",&search);
    int temp=0;
    int pos=0;
    
    for(i=0;i<n;i++)
    {
        if(a[i]==search)
        {
            temp++;
            pos=i;
        }
    }
    
    if(temp==0)
    {
        printf("Element not found");
    }
    else
    {
        printf("Element found at position %d",pos);
    }

    return 0;
}
