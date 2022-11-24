#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,x,p,res,counter=1,ancont=0;
    int inp;
    vector<int>v;
    cin>>n;
    cin>>x;
    for(int i=0;i<x;i++)
    {
        cin>>inp;
        v.push_back(inp);
    }
    cin>>p;
    for(int i=0;i<p;i++)
    {
        cin>>inp;
        v.push_back(inp);
    }
    res=x+p;

    vector<int>::iterator it;
    for(int i=1;i<=res;i++)
    {
        it = find(v.begin(), v.end(), counter);
        if (it != v.end())
        {

            ancont+=1;
            counter+=1;

        }

    }
    if(ancont==n)
    {
        cout<<"I become the guy."<<endl;
    }
    else
    {
        cout<<"Oh, my keyboard!"<<endl;
    }
    return 0;
}
