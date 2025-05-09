#include <bits/stdc++.h>
using namespace std;

#define YES cout << "YES";
#define NO cout << "NO";
#define ll long long
#define nn '\n'
#define LM LLONG_MAX
#define IM INT_MAX
#define ie 1000000
#define BE .begin()
#define EN .end()
string s,as;
char c[1000],n=0;
void push(char a)
{
    c[n]=a;
    n++;
}
void pop()
{
    n--;
    if(c[n]!='(')
    {
        as.push_back(c[n]);
    }
}
void r(char a)  
{
    if(a=='+' || a=='-')
    {
        if(c[n-1]=='(')
        {
            push(a);
        }
        else if(n!=0)
        {
            for(ll i=n;i>-1;i--)
            {
                if(c[n-1]=='(')
                {
                    break;
                }
                pop();
            }
            push(a);
        }
        else 
        {
            push(a);
        }
    }
    else if(a=='^')
    {
        push(a);
    }
    else if(a=='*' || a=='/')
    {
        if(c[n-1]=='^')
        {
            pop();
            push(a);
        }
        else if(c[n-1]=='*' || c[n-1]=='/')
        {
            pop();
            push(a);
        }
        else 
        {
            push(a);
        }
    }
    else if(a=='(' || a==')')
    {
        if(a=='(')
        {
            push(a);
        }
        else 
        {
            for(ll i=n;i>-1;i--)
            {
                if(c[n-1]=='(')
                {
                    pop();
                    break;
                }
                pop();
            }
        }
    }
}

int main() {
    cout<<"InFix: ";
    cin>>s;
    for(ll i=0;i<s.length();i++)
    {
        if(isalnum(s[i]))
        {
            as.push_back(s[i]);
        }
        else 
        {
            r(s[i]);
        }

        if(i==(s.length()-1) && n!=0)
        {
            while (n>-1)
            {
                pop();
            }
        }
    }
    cout<<"PostFix: "<<as<<nn;
    return 0;
}
