#include <iostream>
using namespace std;
void rotate(int arr[],int size,int d)
{
    int i,j;

    for(i=0;i<d;i++)
    {
        int temp=0;
        temp=arr[0];
        for(j=1;j<size;j++)
        {
            arr[j-1]=arr[j];
        }
        arr[size-1]=temp;
    }

    for(int p=0;p<size;p++)
    {
        cout<<arr[p]<<" ";
    }

}

int main()
{
    int n;
    cout<<"Enter array\n";
    cin>>n;

    int arr[50];

    int i=0;
    for(i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    int d;


    cout<<"Enter left rotate by how many times\n";
    cin>>d;

    rotate(arr,n,d);



    return 0;

}