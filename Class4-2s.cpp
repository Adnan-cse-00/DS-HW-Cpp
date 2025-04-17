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
            if(ar[i]<ar[j])
            {
                h=ar[i];
                ar[i]=ar[j];
                ar[j]=h;
            }
        }
    }
    cout<<"The Maximum element found in the array using selection sort:"<<ar[n-1]<<nn;
    cout<<"The Minimum element found in the array using selection sort:"<<ar[0];
    return 0;
}

int main() {
    solve();
    return 0;
}
