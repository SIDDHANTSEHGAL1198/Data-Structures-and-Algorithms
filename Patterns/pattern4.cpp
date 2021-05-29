#include <iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter number"<<endl;
    cin>>n;
    int t=n;
    for(int i=1;i<=n;i++)
    {
        t=n;
        for(int j=n;j>=i;j--)
        {
            cout<<j<<" ";
            
        }
        
        cout<<endl;
    }

    return 0;
}