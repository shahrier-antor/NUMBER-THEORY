#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    bool a[n];
    int b[n];
    memset(a,1,n);
    a[0]=0;
    for(int i=4;i<=n;i+=2)
    {
        a[i]=0;
    }
    for(int i=3;i*i<=n;i+=2)
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
           b[k]=i;
           k++;
        }

    }
    for(int i=0;i<k;i++)
    {
           cout<<b[i]<< " ";



    }

}
