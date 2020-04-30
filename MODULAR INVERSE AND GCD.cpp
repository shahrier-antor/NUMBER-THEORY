#include<bits/stdc++.h>
#define ll long long
using namespace std;
ll egcd(ll a, ll b ,ll *x,ll *y)
{
    if(a==0)
    {
        *x=0;
        *y=1;
        return b;

    }
    ll x1,y1;
    ll gcd= egcd(b%a,a,&x1,&y1);
    *x=y1-(b/a)*x1;
    *y=x1;
    return gcd;

}
void modinv(ll a ,ll m)
{
    ll x,y;
    ll g=egcd(a,m,&x,&y);
    cout<< g<<endl;

    if(g!=1)
        cout<< " invalid";
    else
    {
        ll res=(x%m+m)%m;
        cout<< res<< endl;
    }

}
int main()
{
    ll a,m;
    while(cin>> a>>m)
    {

        modinv(a,m);

    }
}
