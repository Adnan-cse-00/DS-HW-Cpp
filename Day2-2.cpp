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
    ll n;
    cout<<"Enter array size:";
    cin>>n;
    vector<ll>v(n);
    cout<<"Enter array :";
    for(auto& i:v)cin>>i;
    cout<<"Enter element :";
    ll k;
    cin>>k;
    ll l=0,r=n-1;
    while(l<=r)
    {
        ll mid=l+(r-l)/2;
        if(v[mid]==k)
        {
            cout<<"Found"<<nn;
            break;
        }
        else if(k>v[mid])
        {
            r=mid-1;
        }
        else
        {
            l=mid+1;
        }
    }
    return 0;
}

int main() {
    solve();
    return 0;
}
