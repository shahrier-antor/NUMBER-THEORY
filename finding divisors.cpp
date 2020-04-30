#include<bits/stdc++.h>
using namespace std;





int main()
{
    int n;
    cin>>n;
    vector<int> v;

    int k=0;
    for(int i=1;i*i<=n;i++)
    {
        if(i*i==n)
        {
            v.push_back(i);
        }
        else if(n%i==0)
        {
            v.push_back(i);
           // k++;
            v.push_back(n/i);
           // k++;


        }
    }
    for(int i=0;i<v.size();i++)
    {
        cout<< v[i]<< " ";
    }
}

