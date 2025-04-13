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
    //Modify your code to delete a specific value instead of a position 
    ll n;
    cout<<"Enter the size of an array:";
    cin>>n;
    ll ar[n];
    cout<<"Enter the array:";
    for(ll i=0;i<n;i++)
    {
        cin>>ar[i];
    }
    cout<<"Enter the value to delete from the array:";
    ll d;
    cin>>d;
    ll c=0;
    for(ll i=0;i<n;i++)
    {
        if(ar[i]==d)
        {
            c++;
        }
        else
        {
            ar[i-c]=ar[i];
        }
    }
    cout<<"The new array is:";
    for(ll i=0;i<n-c;i++)
    {
        cout<<ar[i]<<' ';
    }
    return 0;
}

int main() {
    solve();
    return 0;
}
