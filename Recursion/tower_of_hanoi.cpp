#include <iostream>
#include <string.h>
using namespace std;

void TOH(int n,int a,int b,int c)
{
    if(n>0)
    {
        TOH(n-1,a,b,c);
        cout<<"Move a disc from "<<a<<" to "<<c<<endl;
        TOH(n-1,b,a,c);
    }
}
int main()
{
    cout<<"Enter n"<<endl;
    int n;
    cin>>n;
    int a,b,c;
    cout<<"Enter a,b,c"<<endl;
    cin>>a>>b>>c;
    TOH(n,a,b,c);

    return 0;
}