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

string solve(ll a,ll b,string s) {
    if(a==b || a>b)
    {
        return s;
    }
    char c;
    c=s[a];
    s[a]=s[b];
    s[b]=c;
    return solve(a+1,b-1,s);
}

int main() {
    string s;
    cout<<"Enter the string:";
    cin>>s;
    ll l=s.length();
    l--;
    s=solve(0,l,s);
    cout<<"After reversing the string usign recursion: "<<s<<nn;
    return 0;
}
