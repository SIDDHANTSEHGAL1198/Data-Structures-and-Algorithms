#include <iostream>
#include <string.h>
using namespace std;
int main()
{
    string word1;
    string word2;;
    int k=0;

    cout<<"Enter word1"<<endl;;
    getline(cin>>ws,word1);

    cout<<"Enter word2"<<endl;
    getline(cin>>ws,word2);

    if(word1.compare(word2)==0)
    {
        cout<<"Word 1 after conversion="<<word1<<endl;
        cout<<"Number of operation="<<0<<endl;
    }
    else
    {
        int l1=word1.size();
        int l2=word2.length();
        string common="";
        for(int i=0;i<l1;i++)
        {
            for(int j=0;j<l2;j++)
            {
                while(word2[j]==word1[i])
                {
                    if(k==0)
                    {
                        k=j;
                    }
                    common=common+word2[j];
                    j++;
                    i++;
                }
            }
        }

        cout<<"Common==>"<<common<<endl;
        /*cout<<word1.find(common[0])<<endl;
        cout<<word1.find(common[common.length()-1])<<endl;*/

        int c_start=word1.find(common[0]);
        int c_end=word1.find(common[common.length()-1]);

        word1=word1.substr(c_start,c_end);
        //cout<<word1<<endl;


        //Word2 after erasing common part
        /*word2=word2.erase(word2.find(common),common.size());
        cout<<word2<<endl;*/


        /*cout<<"After converting word1 to word2"<<endl;
        word1=common+word2;
        cout<<word1<<endl;*/

        string lp="";
        string rp="";
        lp=word2.substr(0,word2.find(common));
        rp=word2.substr(word2.find(common)+common.size(),word2.length());
        cout<<"Left Part=> "<<lp<<endl;
        cout<<"Right part=> "<<rp<<endl;


        cout<<"After converting word1 to word2=";
        word1=lp+common+rp;
        cout<<word1<<endl;

        cout<<"Number of opeartaions=>";
        int op=0;
        if(common.length()>0)
        {
            op++;
        }
        if(lp.length()>0)
        {
            op++;
        }
        if(rp.length()>0)
        {
            op++;
        }

        cout<<op<<endl;
    }

    return 0;
}
    
    