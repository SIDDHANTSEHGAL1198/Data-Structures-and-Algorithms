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

    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            if(i<j)
            {
                cout<<"0"<<" ";
            }
            else
            {
                cout<<a[i][j]<<" ";
            }
        }
        cout<<endl;
    }

return 0;
}