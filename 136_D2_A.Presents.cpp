#include<bits/stdc++.h>
using namespace std;
int main()
{
    int sizes;
    cin>>sizes;
    int arr[sizes],brr[sizes];
    for(int i=1;i<=sizes;i++)
    {
        cin>>arr[i];
        brr[arr[i]]=i;
       // cout<<arr[arr[i]]<<" ";
    }
    for(int i=1;i<=sizes;i++)
    {
        cout<<brr[i];
        if(i!=sizes)
        {
            cout<<" ";
        }
    }
    cout<<endl;
    return 0;
}
