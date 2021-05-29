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
    int i;
    for(i=0;i<k/2;i++)
    {
        swap(str[i],str[k-i-1]);
    }
    
   
    cout<<str;
    
    
    return 0;
}
