#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,sizes;
    string str;
    char first,last;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>str;
        sizes=str.length();
        if(sizes>10)
        {
            cout<<str[0];
        cout<<(sizes-2);
        cout<<str[sizes-1];
        }
        else
            cout<<str;

        cout<<endl;
    }
    return 0;
}
