#include <stdio.h>
int main()
{
    int i,n;
    printf("Enter size of array\n");
    scanf("%d",&n);

    int arr[50];
    printf("Enter array elements\n");
    for(i=0;i<n;i++)
    {
        scanf("%d ",&arr[i]);
    }

    int temp=0,j;

    for(i=1;i<n;i++)
    {
        temp=arr[i],j=i-1;
        while(j>=0 && arr[j]>temp)
        {
            arr[j+1]=arr[j];
            j--;
        }
        arr[j+1]=temp;
    }

    printf("Array after sorting is\n");
    for(i=0;i<n;i++)
    {
        printf("%d ",arr[i]);
    }

    return 0;

}