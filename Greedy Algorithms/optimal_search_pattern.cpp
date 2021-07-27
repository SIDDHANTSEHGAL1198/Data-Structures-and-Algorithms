#include <iostream>
#include <queue>
#include <algorithm>
using namespace std;

int optimal_merge_pattern(int arr[],int n)
{
    priority_queue<int,vector<int>,greater<int>> minheap;
    int i;
    sort(arr,arr+n);
    for(i=0;i<n;i++)
    {
        minheap.push(arr[i]);
    }

    int sum=0;
    while(minheap.size()>1)
    {
        int t1=minheap.top();
        minheap.pop();
        int t2=minheap.top();
        minheap.pop();
        
        sum+=t1+t2;
        
        minheap.push(t1+t2);
    }

    return sum;
}

int main()
{
    int i,n;
    cout<<"Enter size of array"<<endl;
    cin>>n;

    int arr[10000];
    cout<<"Enter array elements"<<endl;
    for(i=0;i<n;i++)
    {
        cin>>arr[i];
    }

    
    cout<<"Optimal Search Pattern==>"<<optimal_merge_pattern(arr,n);
    return 0;
}
