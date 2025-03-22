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
    cout<<"Enter elements:";
    vector<ll>v(n);
    for(auto& i:v)cin>>i;
    sort(v BE,v EN);
    ll num;
    cout<<"Enter the number for searching:";
    cin>>num;
    ll f=0,l=n-1,c=0,hold=0,mid=0;
    while(f<=l)
    {
        mid=(f+l)/2;
        if(v[mid]==num)
        {
            cout<<"Found"<<nn;
            c=0;
            break;
        }
        else if(v[mid]>num)
        {
            l=mid-1;
        }
        else
        {
            f=mid+1;
        }
        if(mid>(n/2))
        {
            hold=mid-1;
        }
        else
        {
            hold=mid+1;
        }
        c++;
    }
    if(c!=0)
    {
        cout<<"The number was not found So the closest ";
        if(abs(num-v[mid])>=abs(num-v[hold]))
        {
            cout<<"smaller number is "<<v[hold-1]<<" and larger number is "<<v[hold];
        }
        else
        {
            cout<<"smaller number is "<<v[mid-1]<<" and larger number is "<<v[mid];

        }
    }
    return 0;
}

int main() {
    solve();
    return 0;
}
