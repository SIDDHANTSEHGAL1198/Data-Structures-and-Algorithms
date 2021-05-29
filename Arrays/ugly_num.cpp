#include <iostream>
using namespace std;
int main()
{
    int num;
    cout<<"Enter number u want to chk\n";
    cin>>num;

    if(num<1)
    {
        cout<<"Nott a ugly number";
    }
    else
    {
        while(num%2==0)
        {
            num/=2;
        }
        while (num%3==0)
        {
            num=num/3;
        }

        while(num%5==0)
        {
            num/=5;
        }

        if(num==1)
        {
            cout<<"Ugly number"<<endl;
        }
        else
        {
            cout<<"Not a ugly number";
        }
        
    }

    return 0;
}