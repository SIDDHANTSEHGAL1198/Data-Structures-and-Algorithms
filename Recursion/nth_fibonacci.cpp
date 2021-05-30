#include <iostream>
#include <cmath>
using namespace std;

int Fibonacci(int n)
{
    int t=0;
    if(n==0)
    {
        return 0;
    }
    if (n==1)
    {
        return 1;
    }
    else
    {
        return Fibonacci(n-1)+Fibonacci(n-2);
    }
}

int main()
{
    cout<<"Enter value for n"<<endl;
    int n;
    cin>>n;
    

    int fibs=Fibonacci(n);
    cout<<"Fibonacci of "<<n<<"th number is="<<fibs<<endl;
    return 0;
} 