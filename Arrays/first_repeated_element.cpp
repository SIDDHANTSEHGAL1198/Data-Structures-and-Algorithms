#include <iostream>
#include<cmath>
#include<limits.h>
using namespace std;

int first_repeat(int arr[],int n)
{
    int i=0;
    int hash[10000];
    for(i=0;i<10000;i++)
    {
        hash[i]=-1;
    }



    int minidx=INT_MAX;
    for(i=0;i<n;i++)
    {
        if(hash[arr[i]]!=-1)
        {
            minidx=min(minidx,hash[arr[i]]);
        }
        else
        {
            hash[arr[i]]=i;
        }
    }

    if(minidx==INT_MAX)
    { 
        return -1;
    }
    else
    {
        return minidx+1;
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

    int rep=first_repeat(arr,size);
    cout<<"First repeated element="<<rep<<endl;
    return 0;
}