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
    cout<<"Enter Array Size:";
    cin>>n;
    ll ar[n];
    cout<<"Enter the Array:";
    for(ll i=0;i<n;i++)
    {
        cin>>ar[i];
    }
    ll h=0;
    for(ll i=0;i<n;i++)
    {
        for(ll j=i;j<n;j++)
        {
            if(ar[j]>ar[i])
            {
                h=ar[i];
                ar[i]=ar[j];
                ar[j]=h;
            }
        }
    }
    cout<<"The Array After sorting it in Descending order using Selection sort:";
    for(ll i=0;i<n;i++)
    {
        cout<<ar[i]<<' ';
    }
    return 0;
}

int main() {
    solve();
    return 0;
}
