#include<bits/stdc++.h>
using namespace std;
int main()
{
    int test,n,res;
    cin>>test;
    for(int i=0;i<test;i++)
    {
        int n;
        cin>>n;
        int arr[n],brr[n];
        for(int j=0;j<n;j++)
        {
            cin>>arr[j];
            brr[j]=arr[j];
        }
        n=sizeof(arr)/sizeof(arr[0]);
        sort(arr,arr+n);
        for(int i=0;i<n;i++)
        {
            if(brr[i]==arr[n-1])
            {
                res=brr[i]-arr[n-2];

            }
            else
            {
               res = brr[i]-arr[n-1];
            }

            cout<<res;
            if(i!=n-1)
                cout<<" ";
        }
        cout<<endl;
    }
    return 0;
}
