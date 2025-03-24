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

ll sort(ll ar[],ll size)
{
    ll h=0;
    for(ll i=0;i<size;i++)
    {
        for(ll j=i+1;j<size;j++)
        {
            if(ar[i]>ar[j])
            {
                h=ar[i];
                ar[i]=ar[j];
                ar[j]=h;
            }
        }
    }
    return 0;
}
ll BinarySearch(ll ar[],ll size)
{
    ll k;
    cout<<"Enter an element for searching:";
    cin>>k;
    ll b=0,e=size-1;
    while(b<=e)
    {
        ll mid=b+(e-b)/2;
        if(ar[mid]==k)
        {
            cout<<k<<" Element found at "<<mid+1<<" index after sorting";
            break;
        }
        else if(k>ar[mid])
        {
            b=mid+1;
        }
        else
        {
            e=mid-1;
        }
    }
    return 0;
}

int main() {
    ll n;
    cout<<"Enter array size:";
    cin>>n;
    cout<<"Enter the array:";
    ll ar[n];
    for(auto& i:ar)cin>>i;
    sort(ar,n);
    BinarySearch(ar,n);
    return 0;
}
