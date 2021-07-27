#include <iostream>
#include <iostream>
#include <array>
#include <vector>
#include <algorithm>
#include <queue>
#include <stack>
using namespace std;

void max_min(int arr[],int n)
{
    sort(arr,arr+n);
    long long min=0;
    long long max=0;
    for(int i=0;i<n/2;i++)
    {
        max+=(arr[i+n/2]-arr[i]);
        min+=(arr[2*i+1]-arr[2*i]);
    }
    cout<<"Maximum Difference==>"<<max<<endl;
    cout<<"Minimum Difference==>"<<min<<endl;
}

int main()
{
    int i,n;
    cout<<"Enter size of array"<<endl;
    cin>>n;
    cout<<"Enter array elements"<<endl;
    int arr[10000];
    for(i=0;i<n;i++)
    {
        cin>>arr[i];
    }

    max_min(arr,n);

    return 0;
}