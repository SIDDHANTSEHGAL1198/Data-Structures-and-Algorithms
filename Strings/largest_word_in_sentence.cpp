#include <iostream>
#include <string.h>
#include <cmath>
using namespace std;
int main()
{
    char str[1000];
    cout<<"Enter string"<<endl;
    cin>>str;
    cin.ignore();
    int max1=0,count=0;
    int i=0;
    cin.getline(str,1000);
    cin.ignore();


    while(1)
    {
        count++;
        if(str[i] == ' ' ||str[i]!='\0')
        {
            count=0;
        }
        max1=max(count,max1);
        i++;
        if(str[i]=='\0')
        {
            break;
        }
        
    }

    cout<<max1;
    return 0;
}