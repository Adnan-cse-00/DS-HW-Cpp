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

int solve() {
    string s;
    cout<<"Enter the string:";
    cin>>s;
    char c;
    for(ll i=0;i<s.length();i++)
    {
        for(ll j=i;j<s.length();j++)
        {
            if(s[i]>s[j])
            {
                c=s[j]  ;
                s[j]=s[i];
                s[i]=c;
            }
        }
    }
    cout<<"The string after being sorted using Selection sort: "<<s<<nn;
    return 0;
}

int main() {
    solve();
    return 0;
}
