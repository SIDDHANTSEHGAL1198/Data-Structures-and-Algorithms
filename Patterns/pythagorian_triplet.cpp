#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    int x,y,z;

    cout<<"Enter a,b,c"<<endl;
    cin>>x;
    cin>>y;
    cin>>z;
    int a,b,c;

    a=max(x,max(y,z));
    if(x==a)
    {
        b=y;
        c=z;
    }
    else if(a==y)
    {
        b=x;
        c=z;
    }
    else if(z==a)
    {
        b=x;
        c=y;
    }

    if(pow(a,2)==pow(b,2)+pow(c,2))
    {
        cout<<"Pythagoras Triplet";
    }
    else
    {
        cout<<"Not a pythagoras triplet";
    }

    return 0;
}