#include<bits/stdc++.h>
using namespace std;
int main()
{
    int test_case;
    cin>>test_case;
    string str,ptr;
    for(int i=0;i<test_case;i++)
    {
        cin>>str;
        ptr=str;
        reverse(ptr.begin(),ptr.end());
        cout<<str+ptr<<endl;
    }
    return 0;
}
