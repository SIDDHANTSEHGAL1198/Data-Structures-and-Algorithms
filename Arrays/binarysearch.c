#include <stdio.h>
int main()
{
    int i,j,size;
    printf("Enter the size of the array\n");
    scanf("%d",&size);
    int arr[100];
    
    printf("Enter array elements\n");
    for(i=0;i<size;i++)
    {
        scanf("%d",&arr[i]);
    }

    printf("Enter element u want to find\n");
    int s;
    scanf("%d",&s);

    int mid=0,lb=0,ub=size-1,pos=0,t=0;
    while(lb<=ub)
    {
        mid=(lb+ub)/2;
        if(s==arr[mid])
        {
            pos=mid;
            t++;
            break;
        }
        else if(s<arr[mid])
        {
            ub=mid-1;
        }
        else 
        {
            lb=mid+1;
        }
        

    }
    if(t==1)
    {
        printf("Element found at pos %d",pos);
    }
    else
    {
        printf("Element not found");
    }
    return 0;
}