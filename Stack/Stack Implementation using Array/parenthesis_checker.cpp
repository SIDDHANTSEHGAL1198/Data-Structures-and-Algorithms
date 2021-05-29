#include<iostream>
#include <stack>
using namespace std;

bool parenthesis_chkr(string s)
{
    stack<char> st;

    for(int i=0;i<s.length();i++)
    {
        if(s[i]=='{' || s[i]=='[' || s[i]=='(')
        {
            st.push(s[i]);
        }
        else if(s[i]==')')
        {
            if(!st.empty() && st.top()=='(')
            {
                st.pop();
            }
            else
            {
                return false;
                break;
            }
        }

        else if(s[i]=='{')
        {
            if(!st.empty() && st.top()=='}')
            {
                st.pop();
            }
            else
            {
                return false;
                break;
            }
        }

        else if(s[i]=='[')
        {
            if(!st.empty() && st.top()==']')
            {
                st.pop();
            }
            else
            {
                return false;
                break;
            }
        }

    }

    if(!st.empty())
    {
        return true;
    }
    else
    {
        return false;
    }
    
}

int main()
{
    string s;
    cout<<"Enter expression\n";
    getline(cin,s);

    bool res=parenthesis_chkr(s);
    cout<<res;
    return 0;
}