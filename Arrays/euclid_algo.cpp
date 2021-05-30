#include <iostream>
using namespace std;

int gcd(int n1,int n2)
{
    int d=-1;
    while(d!=0)
    {
        d=n1%n2;
        n1=n2;
        n2=d;
    }
    return n1; 
}

int main()
{
    int num;
    int num2;
    cout<<"Enter first number"<<endl;
    cin>>num;
    cout<<"Enter second number"<<endl;
    cin>>num2;

    int res=gcd(num,num2);
    cout<<"GCD of 2 numbers==>"<<res;
    return 0;
}