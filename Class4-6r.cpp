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
// make a decimal number to binary usign recursion 
int solve(ll n , ll o) {
    if(n==0)
    {
        return 0;
    }
    return ((n%2)*o)+solve(n/2,o*10);
}

int main() {
    ll n;
    cout<<"Enter a Decimal number:";
    cin>>n;
    ll o=1;
    ll ans=solve(n,o);
    cout<<"The binary number :"<<ans<<nn;
    return 0;
}
