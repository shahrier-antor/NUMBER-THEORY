#include<bits/stdc++.h>
using namespace std;
int ncr(int n,int r)
{
    int  ans=1;
    r=r>n-r?n-r:r;
    int j=1;
    for(;j<=r;j++)


}
int main()
{
    int n,c;
    while(cin>>n>>c)
    {
        cout<< ncr(n,c)<<endl;
    }
}
