#include <iostream>
#include <string.h>
using namespace std;

string remove_duplicates(string str)
{
    if(str.length()==0)
    {
        return "";
    }
    char first=str[0];
    string ans=remove_duplicates(str.substr(1));
    if(first==ans[0])
    {
        return ans;
    }

    return (first+ans);
}
int main()
{
    string str;
    cout<<"Enter string\n";
    cin>>str;

    string ans=remove_duplicates(str);
    cout<<"String after removing duplicates:"<<ans<<endl;
    return 0;
}