// Jzzhu and Children : https://codeforces.com/problemset/problem/450/A

#include<bits/stdc++.h>
#define fr(i,c,b) for(int i=c;i<b;i++)
#define frl(i,c,b) for(ll i=c;i<b;i++)
#define si(x) int x; scanf("%d", &x)
#define sll(x) ll x; scanf("%lld", &x)
#define pi(x) printf("%d", x)
#define pll(x) printf("%lld", x)
#define nl printf("\n")
#define watch(x) cout << (#x) << " is " << (x) << endl
#define MAX 100001
#define M 1000000007
#define pb push_back

typedef long long int ll;

using namespace std;

int main()
{
   // freopen ("input.txt","r",stdin);
    si(n);
    si(m); ll a[n];
    fr(i,0,n) cin>>a[i];
    ll mx=INT_MIN; ll ans=0;
    fr(i,0,n) {  ll temp=ceil((double)a[i]/(double)m); if(mx<=temp) { mx=temp; ans=i+1; } }
    cout<<ans;
}