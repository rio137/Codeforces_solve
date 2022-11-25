#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int n,m,a,res1,res2,tot;
    cin>>n>>m>>a;
    res1=n/a;
    res2=m/a;
    if(n%a!=0)
    {
        res1+=1;
    }
    if(m%a!=0)
    {
        res2+=1;
    }
    cout<<res1*res2<<endl;
    return 0;
}
