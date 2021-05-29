#include <iostream>
using namespace std;
int main()
{
    int i,n,max=0;
    cout<<"Enter size of the array\n";
    cin>>n;
    int arr[10000];

    cout<<"Enter array elements\n";
    for(i=0;i<n;i++)
    {
        cin>>arr[i];
    }

    for(i=0;i<n;i++)
    {
        if(arr[i]==1)
        {
            int d=1;
            int j=i+1;
            while(arr[j]==1 && j<n)
            {
                d++;
                j++;
            }
            if(d>max)
            {
                max=d;
                d=0;
            }
        }
        
    }


    cout<<"Most Consecutive 1's=>"<<max;

    return 0;
}