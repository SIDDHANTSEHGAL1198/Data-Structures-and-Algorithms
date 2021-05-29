#include <iostream>
using namespace std;

int setbit(int num,int pos)
{
    return (num | (1<<pos));

}

int main()
{
    cout<<"Enter number"<<endl;
    int pos,num;
    cin>>num;

    cout<<"Enter position"<<endl;
    cin>>pos;
    cout<<setbit(num,pos);
    return 0;
}