#include<bits/stdc++.h>
#define max 1000000
//#define ll long long
using namespace std;
int main()
{
    string a,b ;
    cin>>a>>b;
    //cout<<a.size()<<endl<b.size();
    int  m,n;
    m=a.length();
    n=b.length();
    int val[m+n]={0};


    for(int  i=m-1;i>=0;i--)
    {
        for(int j=n-1;j>=0;j--)
        {
            int  sum=0;
            int mul= (a[i]-'0')*(b[j]-'0');
            sum=val[i+j+1]+mul;
            val[i+j]+=sum/10;
            val[i+j+1]=sum%10;

       }
    }
    int j;
    for(int i=0;i<m+n;i++)
    {
         if(a[i])
         {
            j=i;
            break;
         }
    }
    for(int i=j+1;i<m+n;i++)
        cout<<val[i];
       /* unsigned long long a,b;
        cin>>a>>b;
        cout<<a*b;*/

}
