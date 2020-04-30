#include<bits/stdc++.h>
#define ll long long
using namespace std;

ll egcd(ll a,ll b, ll &x, ll &y)
{
    if(a==1)

    {
        x=1;
        y=0;
        return b;
    }
    ll x1,y1;
    ll d=egcd(b%a,a,x1,y1);
    x=y1-(b/a)*x1;
    y=x1;
    return d;
}
ll modinverse(ll a, ll m)
{
    ll x,y;
   /* if(egcd(a,m,x,y)!=1)
        return -1;*/
      ll k = egcd(a,m,x,y);
    x=(x%m+m)%m;
    return x;
}
int main()
{
    ll a,m;
    cin>>a>>m;
    ll inv=modinverse(a,m);
    cout<< inv;
}
