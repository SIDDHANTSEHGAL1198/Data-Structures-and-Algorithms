#include <iostream>
#include <string>
using namespace std;

string reverse_str(string s1)
{
    int i=0,len=0;
    while(s1[i]!='\0')
    {
        i++;
        len++;
    }
    for(int i=0;i<len/2;i++)
    {
        char temp=s1[i];
        s1[i]=s1[len-1];
        s1[len-1]=temp;
    }
    return s1;
}

void base7(int num)
{
    int n=0;
    if(num<0)
    {
        num=abs(num);
        n++;
    }
    int d=0,k=0;
    string s1="";
    while(num!=0)
    {
        d=num%7;
        s1=s1+to_string(d);
        num=num/7;
    }

    string s=reverse_str(s1);
    if(n==0)
    {
        
        cout<<s;
    }
    else
    {
        cout<<"-"+s;
    }
}
int main()
{
    int n;
    cout<<"Enter Number\n";
    cin>>n;

    base7(n);
    return 0;

}