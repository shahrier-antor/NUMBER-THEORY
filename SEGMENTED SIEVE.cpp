#include<bits/stdc++.h>

using namespace std;
#define ll long long
#define max 32000

vector<int> primes;
void sieve()
{
    bool isPrime[max];
    for(int i=1;i<max;i++)isPrime[i]=1;
    for(int i=3;i*i<=max;i+=2)
    {
      if(isPrime[i])
      {
        for(int j=i*i;j<=max;j+=i)
        {
            isPrime[j]=0;

        }
      }
    }


    primes.push_back(2);
   int k=1;
    for(int i=3;i<max;i+=2)
    {
        if(isPrime[i])
        {

            primes.push_back(i);
        }
    }

}
void segsieve(ll l, ll r)
{
    bool isPrime[r-l+1];
    for(int i=0;i<r-l+1;i++)
        isPrime[i]= true;
    for(int i=0;primes[i]*primes[i]<=r;++i)
    {
        int cp=primes[i];
        ll base=(l/cp)*cp;
        if(base<l)base+=cp;
        for(int j=base;j<=r;j+=cp)
        {
            isPrime[j-l]=false;

        }
        if(base==cp)isPrime[base-l]=true;

    }
    if(l==1)isPrime[0]=false;
    for(int i=0;i<r-l+1;i++)
    {
        if(isPrime[i])
        {
            cout<< l+i<<endl;
        }
    }
    cout<< endl;
}
int main()
{
    sieve();
    int t;
    cin>>t;
    while(t--)
    {


    int l,r;

    cin>> l>> r;
    segsieve(l,r);
    }

}
