
#include <iostream>
#include <string.h>
using namespace std;
int main()
{
    char str[100];
    string res[1000][1000];
    cout<<"Enter string"<<endl;
    cin>>str;

    int i=0,len=0,z;
    while (str[i]!='\0')
    {
        i++;
        len++;
    }

    int j,c=0,r=0;
    i=0;
    string s1=" ";

    while(i<len)         // First time
    {
        j=i;
        s1=" ";
        while(j<len)
        {
            s1+=str[j];
            if (r==0)
            {
                res[0][r]=s1;
                r++;
            }
            else
            {
                for(z=0;z<r;z++)
                {
                    if(res[0][z]==s1)
                    {
                        break;
                    }

                }
                if(z==r)
                {
                    res[0][r]=s1;
                    r++;
                }

            }
            cout<<s1<<endl;
            c++;
            j++;
        }
        i++;
    }

    cout<<r<<endl;




    for(int y=0;y<len-1;y++)
    {
        char t=str[0];
        for(int k=1;k<len;k++)
        {
            str[k-1]=str[k];
        }
        str[len-1]=t;
        i=0;
        while(i<len)
        {
            j=i;
            s1=" ";
            while(j<len)
            {
                s1+=str[j];
                cout<<s1<<endl;
                c++;
                j++;
            }
            i++;
        }
    }

   

    cout<<endl<<c;

    
    return 0;
}