#include<bits/stdc++.h>
using namespace std;
int main()
{
    int test,arr[3],n;
    cin>>test;
    for(int j=0;j<test;j++)
    {
      for(int i=0;i<3;i++)
    {
        cin>>arr[i];
    }
    n=sizeof(arr)/sizeof(arr[0]);
    sort(arr,arr+n);
    cout<<arr[1]<<endl;
    }

    return 0;
}
