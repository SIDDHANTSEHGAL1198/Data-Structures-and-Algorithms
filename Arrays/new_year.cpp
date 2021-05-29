#include <iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter size\n";
    cin>>n;
    int j,i;

    cout<<"Enter array elements"<<endl;

    int arr[100];
    for(i=0;i<n;i++)
    {
        cin>>arr[i];
    }

    int ans=0;

    for(i=0;i<n;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(arr[i]>arr[j])
            {
                ans++;
            }
        }

    }
    cout<<"Bribe count=>"<<ans;

    return 0;
}