#include <iostream>
using namespace std;

int kth_element(int arr[][10],int n,int k)
{
    int max=arr[n-1][n-1];
    int i,j,t,count=0;

    int hash[max];

    for(i=0;i<=max;i++)
    {
        hash[i]=0;
    }

    i=0;
    j=0;
    t=0;
    while(i<n)
    {
        t=arr[i][j];
        hash[t]=1;
        j++;
        if(j==n)
        {
            i++;
            j=0;
        }
    }

    for(i=0;i<=max;i++)
    {
        if(hash[i]>=1)
        {
            if(count<k)
            {
                count+=hash[i];
                if(count==k)
                {
                    return i;
                }
            }
        }
    }
}

int main()
{
    int arr[10][10];
    

    int size;
    cout<<"Enter matrix size\n";
    cin>>size;

    int i,j;

    for(i=0;i<size;i++)
    {
        for(j=0;j<size;j++)
        {
            cin>>arr[i][j];
        }
    }


    for(i=0;i<size;i++)
    {
        for(j=0;j<size;j++)
        {
            cout<<arr[i][j]<<"   ";
        }
        cout<<endl;
    }

    int k=0;
    cout<<"Enter k_th smallest element"<<endl;
    cin>>k;

    int res=kth_element(arr,size,k);
    cout<<"kth smalllest ele->"<<res;
    return 0;
}