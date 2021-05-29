#include <iostream>
#include <string.h>
using namespace std;
int main()
{
    string str;
    cout<<"Enter string"<<endl;
    getline(cin>>ws,str);

    int hash[26];
    int i;
    for(i=0;i<26;i++)
    {
        hash[i]=0;
    }

    for(i=0;i<str.size();i++)
    {
        hash[str[i]-'a']+=1;
    }

    for(i=0;i<26;i++)
    {
        if(hash[i]>0)
        {
            cout<<"Frequency of caharcter "<<char(i+'a')<<" is==>"<<hash[i]<<endl;
        }
    }
    return 0;
}