// Dubstep::https://codeforces.com/problemset/problem/208/A

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
    string s;    cin>>s;
    string temp="WUB";
    size_t pos = -1;
    while ((pos  = s.find(temp))!= std::string::npos)
    {
        if(pos==0)
            s.replace(pos, temp.length(), "");
        else if(s[pos-1]==' ')
            s.replace(pos, temp.length(), "");
        else
            s.replace(pos, temp.length(), " ");
    }
    cout<<s;

}