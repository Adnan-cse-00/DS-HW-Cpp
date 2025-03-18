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
    ll k,c=0;
    cout<<"Enter the number to delete:";
    cin>>k;
    for(ll i=0;i<n;i++)
    {
        if(v[i]==k)
        {
            for(ll j=i;j<n;j++)
            {
                v[j]=v[j+1];
            }
            v[n-1]=0;
            c++;
            i--;
        }
    }
    if(c==0)
    {
        cout<<"Value was not found!"<<nn;
    }
    else
    {
        cout<<"The new array is:";
        for(ll i=0;i<n-c;i++)
        {
            cout<<v[i]<<' ';
        }
    }
    return 0;
}

int main() {
    solve();
    return 0;
}
