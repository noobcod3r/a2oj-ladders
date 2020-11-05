// Valera and Fruits :: https://codeforces.com/contest/441/problem/B

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
    si(n);
    sll(v);
    vector<ll> val(3002);
    fill(val.begin(),val.end(),0);
    fr(i,0,n)
    {
        si(x); sll(y); val[x]+=y;
    }
    
    ll ans=0;
    
    ll curr=0;
    fr(i,1,3002)
    {
        ll day=0;
        day+=val[i];
        if(day+curr<=v)
        {
            ans=ans+day+curr;
            curr=0;
        }
        
        else 
        {
            ans=ans+v;
            ll temp=v-curr;
            temp=max(temp,(ll)0);
            curr=day-temp;
        }
	 //	cout<<i<<" "<<ans<<endl;
      
    }
 
    cout<<ans;
}