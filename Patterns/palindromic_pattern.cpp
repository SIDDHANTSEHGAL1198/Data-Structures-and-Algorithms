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
        for(space=1;space<=n-i;space++)
        {
            cout<<" ";
        }
        for(j=i;j>=1;j--)
        {
            cout<<j;
        }
        if(i!=1)
        {
            for(j=2;j<=i;j++)
            {
                cout<<j;
            }
        }
        cout<<endl;

    }
    return 0;
}