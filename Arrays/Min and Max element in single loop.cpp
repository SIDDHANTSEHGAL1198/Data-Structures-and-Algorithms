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
    int min,max=arr[0];
    
    for(i=0;i<n;i++)
    {
        if(arr[i]<min)
        {
            min=arr[i];
        }
        if(arr[i]>max)
        {
            max=arr[i];
        }
    }
    
    cout<<"Minimum element="<<min<<endl;
    cout<<"Maximum element="<<max;
    
    return 0;
}
