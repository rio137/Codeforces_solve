#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m,counter=0,res;
    cin>>n>>m;
    if(m%2==0)
        res=m/2;
    else
        res=(m-1)/2;
        n+=1;
    while(n<=m)
    {
        for(int i=2;i<=res;i++)
        {
            if(n%i==0)
            {
                counter=1;break;
            }
            else
                continue;
        }
        if(counter==1)
            n+=1;
        else
        {
           break;
        }
        counter=0;
    }
    if(n==m && counter==0)
        cout<<"YES"<<endl;
    else
        cout<<"NO"<<endl;
    return 0;
}
