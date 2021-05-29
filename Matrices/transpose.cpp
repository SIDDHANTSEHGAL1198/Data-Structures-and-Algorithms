#include <iostream>
using namespace std;

void transpose(int arr[][10],int n)
{
    int i,j;

    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            if(i>j)
            {
                int temp=arr[i][j];
                arr[i][j]=arr[j][i];
                arr[j][i]=temp;
            }
        }
    }

    cout<<"Printing transposed matrix"<<endl;
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            cout<<arr[i][j]<<"   ";
        }
        cout<<endl;
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

    for(i=0;i<size;i++)
    {
        for(j=0;j<size;j++)
        {
            arr[i][j]=n;
            n++;
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

    transpose(arr,size);
    return 0;
}