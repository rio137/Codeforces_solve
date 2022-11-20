#include<bits/stdc++.h>
//#include<string>
using namespace std;
int main()
{
    string str;
    cin>>str;
    int n;
    vector<int>newvec;
   for(int i=0;i<str.length();i++)
    {
        if(str[i]=='+')
            continue;
        else
        {
            n = int(str[i])-48;
            newvec.push_back(n);
        }
    }
    sort(newvec.begin(),newvec.end());
    for (int i = 0; i < newvec.size(); i++)
    {
        cout <<newvec[i];
        if(i!=newvec.size()-1)
        cout<<"+";
    }

    cout<<endl;
    return 0;
}
