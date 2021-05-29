#include <iostream>
using namespace std;

int main()
{
    int size;
    cout<<"Enter size of array\n";
    cin>>size;

    int arr[1000];

    cout<<"Enter array elements\n";
    for(int i=0;i<size;i++)
    {
        cin>>arr[i];
    }

    int num;
    cout<<"Enter number u wnna insert"<<endl;
    cin>>num;

    int i=size-1;
    while(arr[i]>num)
    {
        arr[i+1]=arr[i];
        i--;
    }
    arr[i+1]=num;
    size++;

    cout<<"New array\n";
    for(int i=0;i<size;i++)
    {
        cout<<arr[i]<<" ";
    }
    return 0;    
}