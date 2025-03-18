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
    cout<<"Enter the array:";
    for(auto& i:v)cin>>i;
    ll k;
    cout<<"Enter a postion to delete:";
    cin>>k;
    for(ll i=k-1;i<n;i++)
    {
        v[i]=v[i+1];
    }
    v[n-1]=0;
    cout<<"After delete:";
    for(ll i=0;i<n-1;i++)
    {
        cout<<v[i]<<' ';
    }
    return 0;
}

int main() {
    solve();
    return 0;
}
