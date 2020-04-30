#include<bits/stdc++.h>
using namespace std;
int deg(int n)
{
    int cn[n+1];
    cn[0]=1;
    cn[1]=0;
    cn[2]=1;
    for(int i=3;i<=n;i++)
    {
        cn[i]=(i-1)*(cn[i-1]+cn[i-2]);

    }
    return  cn[n];
}
int main()
{
    int n;
    while(cin>>n)
    {
        cout<< deg(n)<<endl;
    }
}
