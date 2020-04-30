#include<bits/stdc++.h>
using namespace std;
int prime[1000002];
int  sieve(int n)
{

    bool a[n];
    memset(a,1,n);
    a[1]=0;
    for(int i=4;i<=n;i+=2)
    {
        a[i]=0;
    }
    for(int i =3;i*i<=n;i+=2)
    {
        if(a[i])
        {
            for(int j=i*i;j<=n;j+=i*2)
            {
                a[j]=0;
            }
        }
    }
    int k=0;
    for(int i=2;i<=n;i++)
    {
        if(a[i])
        {
           prime[k]=i;
           k++;
        }
    }
    return k;

}
int main()
{
     int n;
     cin>> n;
     int c;


     int j=sieve(n);
    for(int i=0;i<j;i++)
     {
         cout<< prime[i]<<" ";
     }cout<<endl;
     int div=1;
     for(int i=0;prime[i]<=n;i++)
     {
         if(n%prime[i]==0)
         {
             c=1;
            while(n%prime[i]==0)
            {
                n/=prime[i];
                c++;
            }
         }
         div*=c;
     }
     cout<< div;

}
