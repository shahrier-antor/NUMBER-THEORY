#include<bits/stdc++.h>
#define ll long long
using namespace std;
ll fact(ll n)
{
    ll sum=1;
    while(n>0)
    {
        sum*=n;
        n--;
    }
    return sum;

}
ll snofk(ll n,ll k )
{
    if(n==0|k>n)return 0;
    if(k==1)return fact(n-1);
    if(k==n)return 1;
    return snofk(n-1,k-1)+ (n-1)*snofk(n-1,k);

}

int main()
{
    ll n,k;
    while(cin>>n>>k)
    {
        cout<<ssnofk(n,k)<<endl;
    }
}
