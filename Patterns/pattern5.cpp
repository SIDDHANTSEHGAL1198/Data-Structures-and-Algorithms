#include <iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter number"<<endl;
    cin>>n;
    int t=0;
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=n-t;j++)
        {
            cout<<j<<" ";
            
        }
        t++;
        
        cout<<endl;
    }

    return 0;
}