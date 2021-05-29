#include <iostream>
using namespace std;

void triplet_sum(int arr[],int n,int sum)
{
    int i,j;
    int temp=0;

    for(i=0;i<n;i++)
    {
        for(j=0;j<n-1-i;j++)
        {
            if(arr[j]>arr[j+1])
            {
                temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
        }
    }
    i=0;
    

    while (i<n)
    {
        j=i+1;
        int k=n-1;
        while(j<k)
        {
            int s1=0;
            s1=arr[i]+arr[j]+arr[k];
            if(s1==sum)
            {
                cout<<arr[i]<<" "<<arr[j]<<" "<<arr[k];
                i=n+1;
                break;
            }
            else if(s1<sum)
            {
                j++;
            }
            else 
            {
                k--;
            }
        }
        i++;
    }
    
}

int main()
{
    int n;
    cout<<"Enter size"<<endl;
    cin>>n;
    int arr[10000];

    cout<<"Enter array elements"<<endl;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }

    int sum;
    cout<<"Enter sum\n";
    cin>>sum;

    triplet_sum(arr,n,sum);
    return 0;
}