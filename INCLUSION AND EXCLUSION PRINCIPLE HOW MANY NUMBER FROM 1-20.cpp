#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    int primes[]={2,3,5,7,11,13,17,19};
    int t;
    cin>>t;
    int n;
    while(t--)
    {
        cin>>n;



    ll subset = 1<<8;
    ll ans=0;
    ll i,j;
    for(i=1;i<subset;i++)
    {
        ll mul =1ll;
        ll setBits=__builtin_popcount(i);
       /* for(j=0;j<8;j++)
        {
            if(i&(1<<j))
                mul*=primes[j];
        }*/
        ll k=i;
        int l=0;
        while(k>0)
        {
            if(k&1)
            {
                mul*=primes[l];

            }
            l++;
            k=k>>1;
        }

        if(setBits&1)
            ans+=n/mul;
        else
            ans-=n/mul;


    }
    cout<<ans<<endl;
    }
}
