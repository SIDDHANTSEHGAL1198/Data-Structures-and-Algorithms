#include <iostream>
using namespace std;

void rotate_with_extra(int arr[][10],int n)
{
    int mat[15][15];
    int i,j;
    int k=n-1;

    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            mat[i][j]=0;
        }
    }

    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            mat[j][k]=arr[i][j];
        }
        k--;
    }

    cout<<"Printing rotated matrix\n";
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            cout<<mat[i][j]<<" ";
        }
        cout<<endl;
    }
}

void rotate_in_same(int arr[][10],int n)
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

    for(i=0;i<n;i++)
    {
        for(j=0;j<n/2;j++)
        {
            int temp=arr[i][j];
            arr[i][j]=arr[i][n-1-j];
            arr[i][n-1-j]=temp;
        }
    }


    cout<<"Printing rotated matrix\n";
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }

}

int main()
{
    int n;
    cout<<"Enter size n";
    cin>>n;

    int i,j;
    int arr[10][10];
    cout<<"Enter matrix elements"<<endl;
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            cin>>arr[i][j];
        }
    }

    int ch=0;
    cout<<"Rotate with another matrix press 1"<<endl;
    cout<<"Rotate in same matrix press 2"<<endl;
    cout<<"Enter how u want to rotate a matrix\n";
    cin>>ch;

    if(ch==1)
    {
        rotate_with_extra(arr,n);
    }
    else
    {
        rotate_in_same(arr,n);
    }

    return 0;
}