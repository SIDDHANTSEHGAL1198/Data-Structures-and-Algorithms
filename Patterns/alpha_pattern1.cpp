
#include <iostream>

using namespace std;

int main()
{
    
    int i,j;
    int n;
    cout<<"Enter n"<<endl;
    cin>>n;
    for(i=1;i<=n;i++)
    {
        char ch='A';
        for(j=1;j<=i;j++)
        {
            cout<<ch<<" ";
            ch++;
        }
        cout<<endl;
    }

    return 0;
}
