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
ll ar[4];
ll t=0;

void push(ll n)
{
    if(t>=4)
    {
        cout<<"Value overflow";
    }
    ar[t]=n;
    t++;
}

void pop(ll n)
{
    t--;
    if(t<0)
    {
        cout<<"Value Underflow";
    }
}

int main() {
    push(12);
    push(14);
    push(14);
    push(14);
    pop(2);
    pop(2);
    pop(2);
    for(ll i=0;i<t;i++)
    {
        cout<<ar[i]<<' ';
    }
    return 0;
}
