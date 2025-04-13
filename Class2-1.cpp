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
    //Write a C program to delete an element from a given position in an array.
    ll n;
    cout<<"Enter the size of array:";
    cin>>n;
    ll ar[n];
    cout<<"Enter the elements:";
    for(ll i=0;i<n;i++)
    {
        cin>>ar[i];
    }
    cout<<"Enter a position to delete the element:";
    ll d;
    cin>>d;
    d--;
    for(ll i=d;i<n;i++)
    {
        ar[i]=ar[i+1];
    }
    n--;
    cout<<"The new array is:";
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
