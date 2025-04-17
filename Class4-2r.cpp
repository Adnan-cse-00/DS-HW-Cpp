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

int solve(int n,int o) {
    cout<<o<<' ';
    if(o==n)
    {
        return 0;
    }
    return solve(n,o+1);
}

int main() {
    ll n;
    cout<<"Enter a number:";
    cin>>n;
    solve(n,1);
    return 0;
}
