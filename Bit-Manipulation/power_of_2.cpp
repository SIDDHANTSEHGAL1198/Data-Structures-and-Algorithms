#include <iostream>
using namespace std;

int power_check(int num)
{
    int mark=(num && (num & num-1));
    if(mark==0)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

int main()
{
    cout<<"Enter number"<<endl;
    int num;
    cin>>num;


    int res=power_check(num);
    if(res==1)
    {
        cout<<"Power of 2"<<endl;
    }
    else
    {
        cout<<"Not a Power of 2"<<endl;
    }
    return 0;
}