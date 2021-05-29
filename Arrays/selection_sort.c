#include <stdio.h>
int main()
{
    int i,n;

    printf("Enter size of array\n");
    scanf("%d",&n);

    int arr[20];
    
    printf("Enter array elements\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }

    int min,j,temp=0;

    for(i=0;i<n-1;i++)
    {
        min=i;
        for(j=i+1;j<n;j++)
        {
            if (arr[j]<arr[min])
            {
                min=j;
            }
        }

        if(min!=i)
        {
            temp=arr[i];
            arr[i]=arr[min];
            arr[min]=temp;
        }
    }


    printf("Sorted array\n");
    for(i=0;i<n;i++)
    {
        printf("%d ",arr[i]);
    }


    return 0;
}