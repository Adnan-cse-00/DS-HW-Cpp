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

int solve(ll n) {
    if(n==0)
    {
        return 0;
    }
    return n+solve(n-1);
}

int main() {
    ll n;
    cout<<"Enter the number:";
    cin>>n;
    ll no=solve(n);
    cout<<"The sum of first "<<n<<" number using recursion: "<<no<<nn;
    return 0;
}
