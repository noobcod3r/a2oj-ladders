// Permutation :: https://codeforces.com/problemset/problem/137/B

#include<bits/stdc++.h>
#define fr(i,c,b) for(int i=c;i<b;i++)
#define fri(i,c,b,x) for(int i=c;i<b;i+=x)
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
    si(n);
    int ans=0;
    vector<int> a(n);
    map<int,int> mp;
    fr(i,0,n) {  cin>>a[i];  mp[a[i]]++; }
    fr(i,1,n+1)
    {
        if(!mp[i])  ans++;
    }
    cout<<ans;
}