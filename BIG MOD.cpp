#include<bits/stdc++.h>
using namespace std;
int bigmod(int a,int b,int m)
{
    if(!b)return 1%m;
    int x=bigmod(a,b/2,m);
    x=(x*x)%m;
    if(b%2)x=(x*a)%m;
    return x;

}
int main()
{
    cout<< bigmod(2,5,5);
}

