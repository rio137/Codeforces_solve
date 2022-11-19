#include<bits/stdc++.h>
using namespace std;
int main()
{
    string str,mtr;
    int flag=0,an_counter=0;
    getline(cin,str);
    for(int i=0;i<str.length();i++)
    {
        if(int(str[i])>=65 && int(str[i])<=90)
        {
            str[i]=tolower(str[i]);
        }
        if(int(str[i])>=97 && int(str[i])<=122)
        {
            for(int j=0;j<i;j++)
            {
                if(str[i]==str[j])
                {
                    flag=1;

                    break;
                }
            }
            if(flag==0)
            {

                an_counter+=1;
            }
            else{

                flag=0;
            }

        }

    }

    cout<<an_counter<<endl;

    return 0;
}
