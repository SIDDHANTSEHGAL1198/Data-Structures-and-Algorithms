#include <iostream>
using namespace std;

void triplet_sum(int arr[],int size,int sum)
{
    int max=0;
    for(int i=0;i<size;i++)
    {
        if(max<arr[i])
        {
            max=arr[i];
        }
    }

    int hash[100000];
    for(int i=0;i<=max;i++)
    {
        hash[i]=0;
    }

    for(int j=0;j<size;j++)
    {
        hash[arr[j]]=1;
    }

    for(int j=0;j<=max;j++)
    {
        cout<<hash[j]<<" ";
    }

    int s=sum;

    for(int i=0;i<max;i++)
    {
        if(hash[i]==1)
        {
            s=s-i;
            for(int j=i+1;j<max;j++)
            {
                
                if(hash[j]==1)
                {
                    int con=0;
                    con=s-j;
                    if(hash[con]==1)
                    {
                        cout<<endl<<i<<" "<<j<<" "<<con<<endl;
                        i=max+1;
                        break;
                    }
                }
            }
        }
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