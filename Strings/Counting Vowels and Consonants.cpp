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
    
    int i,v=0,c=0;
    for(i=0;i<k;i++)
    {
        if(str[i]=='A' || str[i]=='E' || str[i]=='I' || str[i]=='O' || str[i]=='U' || str[i]=='a' || str[i]=='e' || str[i]=='i' || str[i]=='o' || str[i]=='u' )
        {
            v++;
        }
        else if(str[i]>='A' && str[i]<='Z' || str[i]>=97 && str[i]<=122)
        {
            c++;
        }
        
    }
    
    
    cout<<endl<<"Number of Vowels="<<v<<endl;
    cout<<"Number of Consonants="<<c;

    return 0;
}
