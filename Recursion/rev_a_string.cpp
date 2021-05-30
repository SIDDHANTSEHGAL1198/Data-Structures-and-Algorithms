#include <iostream>
#include <string.h>
using namespace std;

void rev(string str)
{
    if(str.length()==0)
    {
        return;
    }
    else
    {
        string s1=str.substr(1);
        rev(s1);
        cout<<str[0];
    }
}
int main()
{
    string str;
    cout<<"Enter string\n";
    cin>>str;

    rev(str);

    return 0;
}