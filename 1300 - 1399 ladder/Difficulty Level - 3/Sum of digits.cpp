// Sum of Digits: https://codeforces.com/problemset/problem/102/B


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
#define inf 1000000001

typedef long long int ll;

using namespace std;

ll help(ll n)
{
    ll sum=0;
    while(n>0)
    {
        sum+=n%10;
        n/=10;
    }
    return sum;
}

int main()
{
    string s;
    cin>>s;
    ll sum=0;
    ll ans=0;
    for(auto i:s)
    {
        sum+=i-'0';
    }
    if(s.size()==1)
        cout<<0;
    else
    {
        ans=1;
        while(sum>9)
        {
            watch(sum);
            sum=help(sum);
            watch(sum);
            ans++;
        }
        cout<<ans;
    }
}