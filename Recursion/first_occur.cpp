#include <iostream>
#include <cmath>
using namespace std;

int first_occ(int arr[],int n,int i,int key)
{
    if(i==n)
    {
        return -1;
    }
    if(arr[i]==key)
    {
        return i;
    }
    else
    {
        return first_occ(arr,n,i+1,key);
    }
}

int last_occ(int arr[],int n,int i,int key)
{
    if(i==-1)
    {
        return -1;
    }
    else if(arr[i]==key)
    {
        return i;
    }
    else
    {
        return last_occ(arr,n,i-1,key);
    }
}

int main()
{
    cout<<"Enter value for n"<<endl;
    int n;
    cin>>n;

    int arr[10000];
    cout<<"Enter array elements"<<endl;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }

    cout<<"Enter number to be searched"<<endl;
    int key;
    cin>>key;

    int pos=first_occ(arr,n,0,key);
    cout<<"First Occurence at "<<pos<<endl;

    int last=last_occ(arr,n,n-1,key);
    cout<<"Last Occurence at "<<last<<endl;
    return 0;
} 