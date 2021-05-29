#include <iostream>
using namespace std;
int main()
{
    cout<<"Enter n"<<endl;
    int n;
    cin>>n;

    int i,j,space;
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=i;j++)
        {
            cout<<"*";
        }
        for(space=1;space<=(2*n)-2*i;space++)
        {
            cout<<" ";
        }
        for(j=1;j<=i;j++)
        {
            cout<<"*";
        }
        cout<<endl;

    }
    for(i=n;i>=1;i--)
    {
        for(j=1;j<=i;j++)
        {
            cout<<"*";
        }
        for(space=1;space<=(2*n)-2*i;space++)
        {
            cout<<" ";
        }
        for(j=1;j<=i;j++)
        {
            cout<<"*";
        }
        cout<<endl;

    }
}