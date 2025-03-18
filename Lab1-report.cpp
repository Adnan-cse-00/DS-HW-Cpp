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

void insertion(ll ar[],ll size){
    cout<<"Insertion:"<<nn;
    ll a,b;
    cout<<"Enter a index and value:";
    cin>>a>>b;
    ll arr[size+1];
    ll c=0;
    a--;
    for(ll i=0;i<size+1;i++)
    {
        if(i!=a)
        {
            arr[i]=ar[c];
            c++;
        }
        else
        {
            arr[i]=b;
        }
    }
    cout<<"After insertion of an element:";
    for(auto& i:arr)cout<<i<<' ';
    cout<<nn;
}
void deletion(ll ar[],ll size)
{
    cout<<"Deletion:"<<nn;
    ll a;
    cout<<"Enter a index to delete:";
    cin>>a;
    a--;
    for(ll i=a;i<size;i++)
    {
        ar[i]=ar[i+1];
    }
    ar[size-1]=0;
    cout<<"The new array:";
    for(ll i=0;i<size-1;i++)
    {
        cout<<ar[i]<<' ';
    }
    cout<<nn;
}
void traversing(ll arr[],ll size)
{
    cout<<"Traversing:"<<nn;
    cout<<"The elements are:";
    for(ll i=0;i<size;i++)
    {
        cout<<arr[i]<<' ';
    }
    cout<<nn;
}

int main() {
    ll n;
    cout<<"Enter the size of array:";
    cin>>n;
    cout<<"Enter the array:";
    ll ar[n];
    for(auto& i:ar)cin>>i;
    insertion(ar,n);
    traversing(ar,n);
    deletion(ar,n);
    return 0;
}
