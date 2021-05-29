#include <iostream>
using namespace std;

int subarrays_sum(int arr[],int n)
{
    int sum=0;
    int i,j;
    for(i=0;i<n-1;i++)
    {
        for(j=i;j<n-1;j++)
        {
            sum+=arr[j];
        }
    }
    return sum;
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

    int sum=subarrays_sum(arr,n);
    cout<<"Sum of subarrays"<<endl;
    return 0;
}