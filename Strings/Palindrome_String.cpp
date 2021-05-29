#include <iostream>
using namespace std;
int main()
{

string s1;
cout<<"Enter String"<<endl;
cin>>s1;

int flag=0;
int k=0;
k=s1.length();

int i=0;

for(i=0;i<k;i++)
{
if(s1[i]!=s1[k-i-1])
{
flag++;
break;
}
}

if(flag==1)
{
cout<<"Not Palindrome";
}
else
{
cout<<"Palindrome";
}
return 0;
}
