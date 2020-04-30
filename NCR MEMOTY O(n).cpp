#include<bits/stdc++.h>
#define max 100
using namespace std;
long long row[max+1];
int c(int n,int r)
{
    int i,j;
    row[0]=1;
    for(i=1;i<=n;i++)
    {
        for(j=i;j>0;j--)
        {
            row[j]+=row[j-1];
        }
    }
    return row[r];
}

int main()
{
    int  n,r;
    while(cin>> n>> r)
    {
       cout<<c(n,r)<< endl;
    }

}
