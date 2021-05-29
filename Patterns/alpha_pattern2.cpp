
#include <iostream>

using namespace std;

int main()
{
    
    int i,j;
    int n;
    
    cout<<"Enter n"<<endl;
    cin>>n;
    int t=n;
    for(i=1;i<=n;i++)
    {
        char ch='A';
        for(j=1;j<=t;j++)
        {
            cout<<ch<<" ";
            ch++;
        }
        t--;
        cout<<endl;
    }

    return 0;
}
