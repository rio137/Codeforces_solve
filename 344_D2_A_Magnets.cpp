#include<bits/stdc++.h>
using namespace std;
int main()
{
    int sizes,msizes=0,counter=1;
    string str,mtr;
    cin>>sizes;
    for(int i=0;i<sizes;i++)
    {
        cin>>str;
        if(str[0]==mtr[msizes])
        {
            counter+=1;
        }
        mtr[msizes]=str[1];
    }
    cout<<counter<<endl;
    return 0;
}
