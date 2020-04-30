#include<bits/stdc++.h>
using namespace std;
int detect( int a[],int n)
{
    if(n<=1)
        return -1;

    int s=0;

    int f=0;
    int r=0;
    while(true)
    {

        s=a[s];
        f=a[a[f]];
        if(s==f)
            break;

    }


          while(true)
         {

            s=a[s];
            r=a[r];
            if(s==r)
                return s;

         }





}
int main()
{
    int n;
    cin>>n;

  /*const  int a[]={1,7,5,6,2,3,4,8};
  n=sizeof(a)/sizeof(a[0]);*/
   int a[n];
    for(int i=0;i<n;i++)
    {

        cin>>a[i];

    }


    cout<< detect(a,n)<< endl;




}

