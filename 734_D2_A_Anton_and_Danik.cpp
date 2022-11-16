#include<bits/stdc++.h>
using namespace std;
int main()
{
    int counter_A=0,counter_D=0,n;
    cin>>n;
    char games[n];
    for(int i=0;i<n;i++)
    {
        cin>>games[i];
        games[i]=toupper(games[i]);
        if(games[i]=='A')
        {
            counter_A+=1;
        }
        else if(games[i]=='D')
        {
            counter_D+=1;
        }
    }
    if(counter_A>counter_D)
    {
        cout<<"Anton"<<endl;
    }
    else if(counter_A<counter_D)
    {
        cout<<"Danik"<<endl;
    }
    else
        cout<<"Friendship"<<endl;
    return 0;
}
