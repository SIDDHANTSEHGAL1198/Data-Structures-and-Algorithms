#include <iostream>
using namespace std;

void max_til_i(int arr[],int n)
{
    int i,max=0;
    for(i=0;i<n;i++)
    {
        if(max<arr[i])
        {
            max=arr[i];
        }
        cout<<"Maximum element till position "<<i<<" is ==>"<<max<<endl;
    }
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

    max_til_i(arr,n);
    return 0;
}