#include <iostream>
using namespace std;
int main()
{
    int arr[100];
    int size;
    cout<<"Enter size of array\n";
    cin>>size;


    cout<<"Enter array elements\n";
    int i;
    for ( i = 0; i < size; i++)
    {
        cin>>arr[i];
    }
    int k=0,j;

    for(i=0;i<size;i++)
    {
        k=0;
        for(j=0;j<size;j++)
        {
            if(arr[i]==arr[j])
            {
                k++;
            }
        }
        if(k==2)
        {
            cout<<"Duplicate number is=>"<<arr[i];
            break;
        }
    }

    return 0;
    
}