#include <iostream>

using namespace std;

int main()
{
    int n;
    cout<<"Enter size of array"<<endl;
    cin>>n;
    
    int arr[50],sum=0;
    int i,j;
    
    cout<<endl<<"Enter elements"<<endl;
    for(i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    
    cout<<endl<<"Enter sum for finding pair"<<endl;
    cin>>sum;
    
    for(i=0,j=n-1;i<j;)
    {
        if (arr[i]+arr[j]==sum)
        {
            cout<<"Pair of elements"<<arr[i]<<" and "<<arr[j]<<" makes sum "<<sum<<endl;
            i++;
            j--;
        }
        else if (arr[i]+arr[j]>sum)
        {
            j--;
        }
        else
        {
            i++;
        }
    }
    
    
    return 0;
}
