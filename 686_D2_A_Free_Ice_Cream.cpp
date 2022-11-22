#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,counter=0;
    long long int x;

    cin>>n>>x;
    string ch;
    for(int i=0;i<n;i++)
    {
        cin>>ch;
       long long int tg;
        cin>>tg;
        if(ch=="+")
        {
            x+=tg;
        }
        else if(ch=="-")
        {
            if(x<tg)
            {
                counter+=1;
            }
            else
            {
                x-=tg;
            }
        }
    }
    cout<<x<<" "<<counter<<endl;
    x=0;
    return 0;
}
