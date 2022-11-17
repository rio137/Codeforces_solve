#include<bits/stdc++.h>
using namespace std;
int main()
{
    int sizes,counter=0;
    cin>>sizes;
    char str[sizes];
    for(int i=0;i<sizes;i++)
    {
        cin>>str[i];
        str[i]=toupper(str[i]);
    }
    for(int i=0;i<sizes;i++)
    {
        if(str[i]==str[i+1])
            counter+=1;
    }
    cout<<counter<<endl;
    return 0;
}
