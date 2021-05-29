
#include <iostream>

using namespace std;

int main()
{
    
    int i,j;
    int n;
    
    cout<<"Enter n"<<endl;
    cin>>n;
    int t=n;
    char ch='A';
    for(i=1;i<=n;i++)
    {
        
        for(j=1;j<=i;j++)
        {
            cout<<ch<<" ";
        }
        ch++;
        cout<<endl;
    }

    return 0;
}
