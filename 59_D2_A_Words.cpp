#include<bits/stdc++.h>
using namespace std;
int main()
{
    int countupp=0,countlow=0;
    string cases;
    cin>>cases;
    for(int i=0;i<cases.length();i++)
    {
        if(int(cases[i])>=65 && int(cases[i]<=90))
        {
            countupp+=1;
        }
        else if(int(cases[i])>=97 && int(cases[i]<=122))
        {
            countlow+=1;
        }
    }
    if(countupp<=countlow)
        {
            for(int i=0;i<cases.length();i++)
            {
                cases[i]=tolower(cases[i]);
            }
        }
        else
        {
            for(int i=0;i<cases.length();i++)
            {
                cases[i]=toupper(cases[i]);
            }
        }
        cout<<cases<<endl;
    return 0;
}
