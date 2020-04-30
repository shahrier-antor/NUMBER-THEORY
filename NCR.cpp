#include<bits/stdc++.h>
#define ll long long
using namespace std;

ll ncr(ll n,ll r)
{
    ll p=1,k=1;
    if(r>n-r)
        r=n-r;
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
        p=1;
    cout<< p<< endl;
}
int main()
{
    ll n,c;
    while(cin>> n>> c)
    {
        ncr(n,c);
    }

}
