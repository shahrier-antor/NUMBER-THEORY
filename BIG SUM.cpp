#include<bits/stdc++.h>
using namespace std;
/*int main()
{
    string a,b;
    cin>>a>>b;
    int m=a.length();
    int n=b.length();
    if(m==n)
    {
        int k=m;
        int val[k+1]={0};
        for(int i=m-1;i>=0;--i)
        {

            int sum=(a[i]- '0')+(b[i]- '0');
            val[k]+=sum%10;
            val[k-1]+=sum/10;
            k--;
        }
        int j;
         for(int i=0;i<=m;i++)
        {
         if(val[i])
         {
            j=i;
            break;
         }
        }

         for(int i=j;i<=m;i++)
        cout<<val[i];

    }
    else
    {
        int j=m>n?m:n;
        int s=j;
        int q=m>n?n:m;
        int k=m-1;
        int l=n-1;
        int val[j+1]={0};

        for(int i=0;i<q;i++)
        {
            int sum=(a[k]- '0')+(b[l]- '0');
            //cout<<sum<<" " ;
            val[j]+=sum%10;
           // cout<< val[j]<< " ";

            val[j-1]+=sum/10;
           // cout <<val[j-1]<<endl;
            k--;
            l--;
            j--;
        }



        for(int i=j;i>0;i--)
        {
            if(m>n)
            {
                 int sum = 0;
                 //cout<<val[i]<< " "<< a[i]<<endl;
                 sum =(val[i])+(a[i]-'0');
                // cout<<sum<<endl;
                 val[i]=sum%10;
                 //cout<<val[i]<<endl;
                 val[i-1]+=sum/10;
                //cout<<val[i-1]<<endl;


            }

            else
            {
                  int sum = 0;
                 //cout<<val[i]<< " "<< a[i]<<endl;
                 sum =(val[i])+(b[i]-'0');
                // cout<<sum<<endl;
                 val[i]=sum%10;
                 //cout<<val[i]<<endl;
                 val[i-1]+=sum/10;
                //cout<<val[i-1]<<endl;
            }

        }
         int t;
         for(int i=0;i<=j;i++)
        {
         if(val[i])
         {
            t=i;
            break;
         }
        }

         for(int i=t;i<=s;i++)
        cout<<val[i];




    }
}*/
int main()
{
    string a,b;
    cin>>a>>b;
    int m=a.length();
    int n=b.length();
    int k=m>n?m:n;
    int a1[k]={0};
    int b1[k]={0};
    for(int i=0;i<a.length();i++)
    {
        a1[i]=(a[m-1]-'0');
        m--;
    }

     for(int i=0;i<b.length();i++)
    {
        b1[i]=(b[n-1]-'0');
        n--;
    }


    int val[k+1]={0};
    int val1[k+1]={0};
    for (int i=0;i<k;i++)
    {
        int sum=a1[i]+b1[i]+val[i];
       // cout<< sum<< " ";

        val[i]=sum%10;
        //cout<< val[i]<< " ";
        val[i+1]=sum/10;
       // cout<< val[i+1]<<endl;

    }
    int u=0;
    for(int i=k;i>=0;i--)
    {
        val1[u]=val[i];
        u++;
    }


    int y;
         for(int i=0;i<k+1;i++)
        {
         if(val1[i])
         {
            y=i;
            break;
         }
        }

         for(int i=y;i<u;i++)
        cout<<val1[i];





}


