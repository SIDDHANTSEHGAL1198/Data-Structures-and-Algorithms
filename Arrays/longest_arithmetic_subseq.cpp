#include <iostream>
#include <cmath>
using namespace std;

int longest_subseq(int arr[],int n)
{
    int j=2;
    int diff=2;
    int ini=arr[1]-arr[0];
    int count=2;

    while(j<n)
    {
        if(ini == arr[j]-arr[j-1])
        {
            count++;
        }
        else
        {
            ini=arr[j]-arr[j-1];
            count=2;
        }
        diff=max(diff,count);
        j++;
    }
    return diff;
}




int main()
{
    int n;
    cout<<"Enter size of array"<<endl;
    cin>>n;

    int arr[1000];
    cout<<"Enetr array elements"<<endl;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }

    int d=longest_subseq(arr,n);
    cout<<"Longest Arithmetic Subsequence=>>"<<d<<endl;
    return 0;
}