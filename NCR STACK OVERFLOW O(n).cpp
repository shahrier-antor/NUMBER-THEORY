#include<bits/stdc++.h>
#define max 100
using namespace std;
long long tri[max+1][max+1];
void gentri()
{
    int i,j;
    tri[0][0]=1;
    for(i=1;i<max;i++)
    {
        tri[i][0]=1;
        for(j=1;j<=i;j++)
        {
            tri[i][j]=tri[i-1][j-1]+tri[i-1][j];

        }
    }
}
long long c(int n,int r)
{
    return tri[n][r];
}
int main()
{
    int n,r;
    gentri();
    while(cin>>n>>r)
    {
        cout<< c(n,r)<<endl;
    }
}
