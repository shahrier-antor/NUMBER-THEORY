#include<bits/stdc++.h>

#define ll long long
using namespace std;

ll c(ll n,ll r)
{
    ll p=1,k=1;
    r=r>(n-r)?n-r:r;
    if(r!=0)
    {
        while(r)
        {
            p*=n;
            k*=r;
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

}
ll catalan(int n)
{
    return c(2*n,n)-c(2*n,n+1);
}
int main()
{
    int n;
    while(cin>>n)
    {
        cout<<catalan(n)<<endl;
    }
}
