#include<bits/stdc++.h>
#include<math.h>
using namespace std;
int digit(int n)
{
    if(n<0)return 0;-
    if(n<=1)return 1;
    double dig=0;
     for(int i=2;i<=n;i++)
      {

          dig+=log10(i);

      }
      return floor(dig)+1;

}
int main()
{
    int n;
    while(cin>>n)
    {
      cout<< digit(n)<<endl;
    }
}
