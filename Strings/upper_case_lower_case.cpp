#include <iostream>
#include <string.h>
using namespace std;
int main()
{
    string s1;
    cout<<"Enter string"<<endl;
    getline(cin>>ws,s1);

    /*  Converting into lower case
    for(int i=0;i<s1.size();i++)
    {
        if(s1[i]>=65 && s1[i]<=90)
        {
            s1[i]=s1[i]+32;
        }
    }
    cout<<s1<<endl;
    */

   for(int i=0;i<s1.size();i++)
    {
        if(s1[i]>=97 && s1[i]<=122)
        {
            s1[i]=s1[i]-32;
        }
    }
    cout<<s1<<endl;
    return 0;
}