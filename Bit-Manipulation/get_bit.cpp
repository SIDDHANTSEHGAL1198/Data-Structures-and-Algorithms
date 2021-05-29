#include <iostream>
using namespace std;

int getbit(int num,int pos)
{
    return ((num & (1<<pos))!=0);

}

int main()
{
    cout<<"Enter number"<<endl;
    int pos,num;
    cin>>num;

    cout<<"Enter position"<<endl;
    cin>>pos;
    cout<<getbit(num,pos);
    return 0;
}