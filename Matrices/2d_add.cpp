#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    cout<<"Enter elements for 1st matrix"<<endl;
    int i,j;
    int a[100][100],b[100][100],add[100][100];


    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            cin>>a[i][j];
        }
    }

    cout<<"Enter elements for 2nd matrix"<<endl;
     for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            cin>>b[i][j];
        }
    }

    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            add[i][j]=a[i][j]-b[i][j];
        }
    }

    cout<<"Result\n";
        for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            cout<<add[i][j]<<" ";
        }
        cout<<"\n";
    }

return 0;
}