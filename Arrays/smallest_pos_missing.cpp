#include <iostream>
using namespace std;
int smallest_missing(int arr[],int n)
{
   
    int i,ele=0;
    int hash[100000];
    int N=100000;
    for(i=0;i<N;i++)
    {
        hash[i]=0;
    }

    for(i=0;i<n;i++)
    {
        if(arr[i]>=0)
        {
            hash[arr[i]]=1;
        }
    }
    

    
    

    for(i=0;i<N;i++)
    {
        if(hash[i]==0)
        {
            ele=i;
            return ele;
        }
    }
    if(ele==0)
    {
        return -1;
    }
}
int main()
{
    int size;
    cout<<"Enter size of array"<<endl;
    cin>>size;

    int arr[10000];
    cout<<"Enter array elements"<<endl;
    for(int i=0;i<size;i++)
    {
        cin>>arr[i];
    }

    int rep=smallest_missing(arr,size);
    cout<<"Smallest missing positive element="<<rep<<endl;
    return 0;
}