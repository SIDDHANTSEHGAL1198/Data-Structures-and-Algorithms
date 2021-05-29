
#include <iostream>

using namespace std;

int main()
{
    int n;
    cout<<"Enter size of array"<<endl;
    cin>>n;
    
    int arr[50],sum=0;
    int i;
    
    cout<<endl<<"Enter elements"<<endl;
    for(i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    
    cout<<endl<<"Enter sum for finding pair"<<endl;
    cin>>sum;
    
    int j;
    for(i=0;i<n-1;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(arr[i]+arr[j]==sum)
            {
                cout<<"Pair of elements"<<arr[i]<<" and "<<arr[j]<<" makes sum "<<sum<<endl;
            }
        }
    }

    return 0;
}
