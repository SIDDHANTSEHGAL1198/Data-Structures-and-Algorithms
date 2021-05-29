#include <iostream>
using namespace std;

int updatebit(int num,int pos,int val)
{
    int mark= ~(1<<pos);
     num= num & mark;

    return (num | (val<<pos));
}

int main()
{
    cout<<"Enter number"<<endl;
    int pos,num,value;
    cin>>num;

    cout<<"Enter position"<<endl;
    cin>>pos;
    cout<<"Enter value"<<endl;
    cin>>value;
    cout<<updatebit(num,pos,value);
    return 0;
}