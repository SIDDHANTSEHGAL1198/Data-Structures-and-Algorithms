#include <iostream>
using namespace std;
int main()
{
    int n1,n2,n3;
    cout<<"Enter n1,n2,n3"<<endl;
    cin>>n1;
    cin>>n2;
    cin>>n3;

    
    int a[10][10];
    int b[10][10];
  
    cout<<"Enter first array elements"<<endl;
    for(int i=0;i<n1;i++)
    {
        for(int j=0;j<n2;j++)
        {
            cin>>a[i][j];
        }
    }

    cout<<"Enter second array elements"<<endl;
    for(int i=0;i<n2;i++)
    {
        for(int j=0;j<n3;j++)
        {
            cin>>b[i][j];
        }
    }
    
    int c[10][10];
    
    for(int i=0;i<n1;i++)
    {
        for(int j=0;j<n3;j++)
        {
            c[i][j]=0;
        }
    }
    
    
    for(int i=0; i<n1; i++)
    {
        for(int j=0; j<n3; j++)
        {
            for(int k=0;k<n2; k++)
            {
                c[i][j]+= (a[i][k]*b[k][j]);
            }
        }
    }

    cout<<"bdew";
    cout<<"Multiplied Matrix"<<endl;
    for(int i=0;i<n1;i++)
    {
        for(int j=0;j<n3;j++)
        {
            cout<<c[i][j]<<"  ";
        }
        cout<<endl;
    }

    return 0;

}