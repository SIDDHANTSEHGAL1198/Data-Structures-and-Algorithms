#include <iostream>
#include <cmath>
using namespace std;

int Factorial(int n)
{
    if(n==0)
    {
        return 1;
    }
    else
    {
        int f=Factorial(n-1);
        return n*f;
    }
}

int main()
{
    cout<<"Enter value for n"<<endl;
    int n;
    cin>>n;
    

    int fact=Factorial(n);
    cout<<"Factorial of "<<n<<" is="<<fact<<endl;
    return 0;
}