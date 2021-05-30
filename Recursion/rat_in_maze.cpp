#include <iostream>
using namespace std;

bool isSafe(int arr[][10],int x,int y,int n)
{
    if(x<n && y<n && arr[x][y]==1)
    {
        return true;
    }
    else
    {
        return false;
    }
}

bool rat_in_maze(int arr[][10],int x,int y,int n,int solArr[][10])
{
    if(x==n-1 && y==n-1)
    {
        solArr[x][y]=1;
        return true;
    }
    if(isSafe(arr,x,y,n))
    {
        solArr[x][y]=1;
        if(rat_in_maze(arr,x+1,y,n,solArr))
        {
            return true;
        }
        if(rat_in_maze(arr,x,y+1,n,solArr))
        {
            return true;
        }
        solArr[x][y]=0;            //backtracking
        return false;
    }
    return false;
}

int main()
{
    int n;
    cout<<"Enter n"<<endl;
    cin>>n;
    int i,j;
    int arr[10][10];
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            cin>>arr[i][j];
        }
    }

    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
    cout<<endl;

    int solArr[10][10];
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            solArr[i][j]=0;
        }
    }

    if(rat_in_maze(arr,0,0,n,solArr))
    {
        for(i=0;i<n;i++)
        {
            for(j=0;j<n;j++)
            {
                cout<<solArr[i][j]<<" ";
            }
            cout<<endl;
        }
    }
    return 0;
}