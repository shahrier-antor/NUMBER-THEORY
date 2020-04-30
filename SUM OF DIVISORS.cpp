 #include<bits/stdc++.h>
 #include<math.h>

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
   /*  int n;
    cin>> n;
    int sum=0;

    for(int i=1;i*i<=n;i++)
    {
        if(i*i==n)
        {
            sum+=i;
            break;
        }
        else if(n%i==0)
        {
            sum+=i;
            sum+=n/i;
        }
    }
    cout<<sum;*/


     int n,c,sq;
     cin>> n;
     sq=sqrt(n);
     int j=sieve(n);
     /*cout<< j;
     for(int i=0;i<j;i++)
     {
         cout<< prime[i]<<" ";
     }cout<<endl;*/
     int sum=1,p,s;
     for(int i=0;prime[i]<=sq;i++)
     {
         if(n%prime[i]==0)
         {
             p=1;
            while(n%prime[i]==0)
            {

                n/=prime[i];
                  p*=prime[i];
                //c++;
            }
            p*=prime[i];

           // cout<<prime[i]<<" "<<c<<endl;

            //cout<<p << " "<< q<< endl;
           sum*=(p-1)/(prime[i]-1);
         //cout<<sum<<endl;
        }

     }
     if(n>1)
     {
         p=n*n;
         s=(p-1)/(n-1);
         sum*=s;


     }
     cout<<sum;


}
