#include <bits/stdc++.h>
using namespace std;
int main()
{
    int sizes,n;//total=0;
    cin>>sizes;
    int arr[sizes];
    for(int i=0;i<sizes;i++)
    {
        cin>>arr[i];
    }
    n = sizeof(arr)/sizeof(arr[0]);
    sort(arr,arr+n);
    for(int i=0;i<sizes;i++)
    {
        cout<<arr[i];
        if(i!=sizes-1)
            cout<<" ";
    }
    cout<<endl;
    return 0;
}
