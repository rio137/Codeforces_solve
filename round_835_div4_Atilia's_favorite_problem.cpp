#include<bits/stdc++.h>
using namespace std;
int main()
{
    int test,cnt=0,result;
    cin>>test;
    for(int i=0;i<test;i++)
    {
        int n;
        cin>>n;
        char arr[n];
        for(int j=0;j<n;j++)
        {
            cin>>arr[j];
            arr[j]=tolower(arr[j]);
            if(int(arr[j])>=97 && int(arr[j])<=122)
            {
                if(cnt<int(arr[j]))
                {
                    cnt=int(arr[j]);
                }
            }
        }
        result = cnt-97+1;
        cout<<result<<endl;
        cnt=0;
    }
    return 0;
}
