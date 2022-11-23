#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int sizes,index,res;
    cin>>sizes>>index;
    if(sizes%2!=0)
    {
        res = (sizes/2)+1;
        if(index<=res)
    {
        res=2*index-1;
    }
    else
    {
        res=2*(index-res);

    }
    }
    else
    {
        res = sizes/2;
        if(index<=res)
    {
        res=2*index-1;
    }
    else
    {
        res=2*(index-res);

    }
    }

   cout<<res<<endl;
    return 0;
}
