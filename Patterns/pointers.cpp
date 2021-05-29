#include <iostream>
using namespace std;
int main()
{
    int a=18;
    int *aptr;
    cout<<"Value of a="<<a<<endl;
    cout<<"Address of aptr="<<aptr<<endl;
    aptr=&a;
    cout<<"Adress of aptr="<<aptr<<endl;
    cout<<"Value in aptr="<<*aptr<<endl;
    //Modifying a  and aptr
    *aptr=20;
    cout<<"Value of a="<<a<<endl;
    cout<<"Value of aptr"<<*aptr<<endl;
    aptr++;
    cout<<"Adress of aptr="<<aptr<<endl;
    return 0;
}