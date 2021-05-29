#include <iostream>
using namespace std;

void linear_search(int arr[][10],int n,int target)
{
    int temp=0,count=0;

    int i=0,j=n-1;
    while(i<n && j>=0)
    {
        if(arr[i][j]==target)
        {
            temp++;
            i=n+1;
            break;
        }
        
        else if(arr[i][j]>target)
        {
            j--;
            count++;
        }
        else
        {
            i++;
            count++;
        }
    }


    
    if (temp==1)
    {
        cout<<"Element found"<<endl;
        cout<<"Number of counts="<<count++ <<endl;
    }
    else
    {
        cout<<"Element not found"<<endl;
    }


}

int main()
{
    int arr[10][10];
    int n=1;

    int size;
    cout<<"Enter matrix size\n";
    cin>>size;

    int i,j;

    cout<<"Enter 2d matrix elements"<<endl;
    for(int i=0;i<size;i++)
    {
        for(int j=0;j<size;j++)
        {
            cin>>arr[i][j];
        }
    }



    for(i=0;i<size;i++)
    {
        for(j=0;j<size;j++)
        {
            cout<<arr[i][j]<<"   ";
        }
        cout<<endl;
    }
    int search=0;
    cout<<"Enter element to be searched"<<endl;
    cin>>search;

    linear_search(arr,size,search);
    return 0;
}