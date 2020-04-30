#include<bits/stdc++.h>
#define ll long long
using namespace std;
/*ll c(ll n,ll r)
{
    ll p=1,k=1;
    r=r>n-r?n-r:r;
    if(!r)
    {
        while(r)
        {
            p*=n;k*=r;
            ll g=__gcd(p,k);
            p/=g;
            k/=g;
            n--;
            r--;
        }
    }
    else
    {
        p=1;
    }
    return p;
}*/
ll snock(ll n,ll k)
{
    if(n==0|k>n)return 0;
    if(k==1|k==n)return 1;

    return snock(n-1,k-1)+k*snock(n-1,k);

}
int main()
{
    ll n,k;
    while(cin>>n>>k)
    {
        cout<<snock(n,k)<<endl;
    }
}

