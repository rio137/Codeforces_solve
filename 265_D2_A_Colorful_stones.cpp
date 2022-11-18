#include<bits/stdc++.h>
using namespace std;
int main()
{
    string str,mtr;
    int counter=0;
    cin>>str;
    cin>>mtr;
    for(int i=0;i<mtr.length();i++)
    {
        if(counter<str.length())
        {
            if(mtr[i]==str[counter])
            {
                counter+=1;
            }
        }
    }
    counter+=1;
    cout<<counter<<endl;
    return 0;
}
