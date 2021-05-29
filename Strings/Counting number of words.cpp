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
    int i,v=0,c=0;
    for(i=0;i<k;i++)
    {
        if(str[i]==' ' && str[i+1]!=' ')
        {
            spaces++;
        }
        
    }
    
    nwords=spaces+1;
    cout<<endl<<"Number of Words="<<nwords;

    return 0;
}
