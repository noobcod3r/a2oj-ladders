// DZY Loves Chessboard :: https://codeforces.com/problemset/problem/445/A

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
    si(n); si(m);
    char ch[n][m];
    fr(i,0,n)
    {
        fr(j,0,m)   cin>>ch[i][j];
    }
    char curr[2]={'B','W'};
    int k=0;
    int pre=0;
    fr(i,0,n)
    {
        fr(j,0,m)
        {
            if(ch[i][j]=='.')   ch[i][j]=curr[k];
            k=!k;
        }
        k=!pre; pre=!pre;
    }
    fr(i,0,n)
    {
        fr(j,0,m)   cout<<ch[i][j];
        nl;
    }
    
    
}