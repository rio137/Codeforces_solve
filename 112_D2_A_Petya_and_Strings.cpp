#include<bits/stdc++.h>
using namespace std;
int main()
{
    int result;
    string str,mtr;
    cin>>str;
    cin>>mtr;
    for(int i=0;i<str.length();i++)
    {
        str[i] = tolower(str[i]);

    }
    for(int i=0;i<mtr.length();i++)
    {
        mtr[i] = tolower(mtr[i]);

    }

    result = str.compare(mtr);
    cout<<result<<endl;
    return 0;
}
