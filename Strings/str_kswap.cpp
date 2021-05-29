#include <iostream>
using namespace std;

void k_swap(char str[],int k)
{
    int len=0;
    int i=0;
    while(str[i]!='\0')
    {
        len++;
        i++;
    }

    i=0;
    int twok=2*k;
    int count=0;
    while(str[i]!='\0')
    {
        if(count==0)
        {
            char t=str[i];
            str[i]=str[i+1];
            str[i+1]=t;
            
        }
        count++;
        if(count==twok)
        {
            count=0;
        }
        i++;
    }

    for(i=0;i<len;i++)
    {
        cout<<str[i];
    }
    cout<<endl;
}
int main()
{
    char str[100000];
    cout<<"Enter string\n";
    cin>>str;


    int k;
    cout<<"Enter k"<<endl;
    cin>>k;

    k_swap(str,k);
    return 0;

}