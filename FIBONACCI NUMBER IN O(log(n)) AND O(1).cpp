#include<bits/stdc++.h>
#include<math.h>
using namespace std;
/*void mul(int f[2][2],int m[2][2])
{
    int x=f[0][0]*m[0][0]+f[0][1]*m[1][0];
    int y=f[0][0]*m[0][1]+f[0][1]*m[1][1];
    int z=f[1][0]*m[0][0]+f[1][1]*m[1][0];
    int w=f[1][0]*m[0][1]+f[1][1]*m[1][1];
    f[0][0]=x;
    f[0][1]=y;
    f[1][0]=z;
    f[1][1]=w;

}
void power(int f[2][2],int n)
{
    if(n==0|| n==1)
        return;
    int m[2][2]={{1,1},{1,0}};
    power(f,n/2);
    mul(f,f);
    if(n%2!=0)
        mul(f,m);
}
int fib(int n)
{
     int f[2][2]={{1,1},{1,0}};
     if(n==0)
        return 0;
     power(f,n-1);
     return f[0][0];

}
int main()
{
    int n;
    while(cin>>n)
    {
        cout<< fib(n)<<endl;
    }
    return 0;
}*/
// the following contains the code for the O(1) time
 /*int fib(int n)
 {
     double phi=(1+sqrt(5))/2;
     return round(pow(phi,n)/sqrt(5));
 }*/
 int main()
 {
     double n;
     while(cin>>n)
     {
        // cout<< fib(n)<<endl;
        cout<<round(n)<< " "<<floor(n)<<" "<< ceil(n)<<endl;
     }
 }
