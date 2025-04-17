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

int solve(ll x,ll y,ll num) {
    if(x%num==0 && y%num==0)
    {
        return num;
    }
    return solve(x,y,num-1);
}

int main() {
    ll x,y;
    cout<<"Enter first number:";
    cin>>x;
    cout<<"Enter second number:";
    cin>>y;
    ll num=x;
    if(x>y)
    {
        num=y;
    }
    ll ans=solve(x,y,num);
    cout<<"The gcd of "<<x<<" and "<<y<<" is: "<<ans<<nn;
    return 0;
}
