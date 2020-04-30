#include<bits/stdc++.h>
#define  ll long long
using namespace std;
//typedef long long ll;
ll trialingzero(ll n,ll p)
{


    if(n<p)
    {

        return 0;
    }
    else
    {
        return n/p + trialingzero(n/p,p);

    }



}
int main()
{
    ll n;
    while(cin>> n)
          {
            cout<< trialingzero(n,5)<< endl;

          }
}
