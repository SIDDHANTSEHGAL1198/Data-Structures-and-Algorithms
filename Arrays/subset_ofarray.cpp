#include <iostream>
using namespace std;

int subset(int a1[],int a2[],int n,int m)
{
    int i=0,j=0,max1=0;
    for(i=0;i<n;i++)
    {
        if(max1<a1[i])
        {
            max1=a1[i];
        }
    }
    
    int hash[100000];
    for(i=0;i<=max1;i++)
    {
        hash[i]=0;
    }
    
    for(i=0;i<n;i++)
    {
        hash[a1[i]]+=1;
    }


    int c=0;
    for(i=0;i<m;i++)
    {
        if(hash[a2[i]]!=0)
        {
            c++;
            continue;
        }
    }
    
    cout<<c<<endl;
    if(c==m)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

int main()
{
    int n1;
    cout<<"Enter size of array"<<endl;
    cin>>n1;

    int n2;
    cout<<"Enter seize of second array"<<endl;
    cin>>n2;

    int arr1[10000];
    cout<<"Enter array elements"<<endl;
    for(int i=0;i<n1;i++)
    {
        cin>>arr1[i];
    }

    int arr2[10000];
    cout<<"Enter array elements"<<endl;
    for(int i=0;i<n2;i++)
    {
        cin>>arr2[i];
    }

    int rep=subset(arr1,arr2,n1,n2);
    if (rep==1)
    {
        cout<<"Subset hai"<<endl;
    }
    else
    {
        cout<<"Nahi h"<<endl;
    }
    return 0;
}