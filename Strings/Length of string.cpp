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
    
    cout<<endl<<"Length of string "<<str<<" is "<<k;

    return 0;
}
