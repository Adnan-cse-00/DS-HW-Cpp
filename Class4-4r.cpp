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

int solve(ll a,ll b) {  
    if(b==0)
    {
        return 1;
    }
    return a*solve(a,b-1);
}

int main() {
    ll x,n;
    cout<<"Enter the number:";
    cin>>x;
    cout<<"Power:";
    cin>>n;
    ll ans=solve(x,n);
    cout<<n<<" Power of "<<x<<" number is: "<<ans<<nn;
    return 0;
}
