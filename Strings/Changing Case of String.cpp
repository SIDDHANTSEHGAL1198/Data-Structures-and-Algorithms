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
    cin>>str;
    
    int k;
    k=str.length();
    
    int i;
    for(i=0;i<k;i++)
    {
        if(str[i]>='a' && str[i]<='z')
        {
            str[i]=str[i]-32;
        }
        else if(str[i]>='A' && str[i]<='Z')
        {
            str[i]=str[i]+32;
        }
        
    }
    
    cout<<endl<<"Output= "<<str;

    return 0;
}
