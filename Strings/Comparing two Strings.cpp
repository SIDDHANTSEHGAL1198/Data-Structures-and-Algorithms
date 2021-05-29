/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>
#include <string>
using namespace std;

int main()
{
    string s1,s2;
    cout<<"Enter first string:";
    getline(cin,s1);
    
    cout<<endl<<"Enter second string";
    getline(cin,s2);
    
    int i,t=0;
    
    int l1=s1.length();
    int l2=s2.length();
    int max;
    
    if(l1>l2)
    {
        max=l1;
    }
    else
    {
        max=l2;
    }
    
    
    for(i=0;i<max;i++)
    {
        if(s1[i]==s2[i])
        {
            t=0;
        }
        else
        {
            t++;
            break;
        }
    }
    
    if(t==0)
    {
        cout<<"Same string";
    }
    else
    {
        cout<<"Different String";
    }

    return 0;
}
