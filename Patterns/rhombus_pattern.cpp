#include <iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter number"<<endl;
    cin>>n;
    int space;
    for(int i=1;i<=n;i++)
    {
        for(space=1;space<=n-i;space++)
        {
            cout<<" ";
        }
        
        for(int j=1;j<=n;j++)
        {
            cout<<"*";
            
        }
        
        cout<<endl;
    }

    return 0;
}