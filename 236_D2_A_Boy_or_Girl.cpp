#include<bits/stdc++.h>
using namespace std;
int main()
{
    string str;
    int cont=0,flag=0;
    cin>>str;
    std::transform(str.begin(), str.end(),str.begin(), ::tolower);
    for(int i=0;i<str.length();i++)
    {
        for(int j=i+1;j<str.length();j++)
        {
            if(int(str[j])>=97 && int(str[j])<=122)
            {
                if(str[i]==str[j])
            {
                str[j]='0';
                //cont+=1;

            }

            }

        }
        if(int(str[i])>=97 && int(str[i])<=122)
            cont+=1;
    }
    //cout<<cont<<endl;

    if(cont%2==0)
    {
        cout<<"CHAT WITH HER!"<<endl;
    }
    else
        cout<<"IGNORE HIM!"<<endl;
    return 0;
}
