

#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int n;
    cout<<"Enter number"<<endl;
    cin>>n;
    int t=1;
    for(int i=2;i<sqrt(n);i++)
    {
        if(n%i==0)
        {
            t=0;
        }
    }
    
    if(t==1)
    {
        cout<<"Prime";
    }
    else
    {
        cout<<"Not a prime";
    }
    
    cout<<sqrt(83);

    return 0;
}
