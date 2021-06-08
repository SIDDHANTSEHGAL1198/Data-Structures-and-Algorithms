#include <iostream>
#include <queue>
using namespace std;

priority_queue<int>maxhq;
void kth_smallest(int arr[],int size,int k)
{

    for(int i=0;i<size;i++)
    {
        maxhq.push(arr[i]);
    }

    while(maxhq.size()>k)
    {
        maxhq.pop();
    }

    cout<<"Kth smallest element="<<maxhq.top();
}

int main()
{
    int n;
    cout<<"Enter array size"<<endl;
    cin>>n;

    int arr[10000];
    cout<<"Enter array elements"<<endl;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }

    cout<<"Enter kth element u wnna search"<<endl;
    int k;
    cin>>k;

    kth_smallest(arr,n,k);
    return 0;
}