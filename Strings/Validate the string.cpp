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
    string str;
    cout<<"Enter the string : ";
    getline(cin,str);
    
    int k;
    k=str.length();
    int spaces=0,nwords=0;
    int i,valid=0;
    for(i=0;i<k;i++)
    {
        if(str[i]>=65 && str[i]<=90 || str[i]>=97 && str[i]<=122 || str[i]>=48 && str[i]<=57)
        {
            valid=0;
        }
        else
        {
            valid++;
            break;
        }
        
    }
    
    if(valid==1)
    {
        cout<<"Invalid String";
    }
    else
    {
        cout<<"Valid String";
    }
    
    return 0;
}
