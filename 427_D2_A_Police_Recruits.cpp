#include<bits/stdc++.h>
using namespace std;
int main()
{
    int sizes,hired=0,untreated=0;
    cin>>sizes;
    int arr[sizes];
    for(int i=0;i<sizes;i++)
    {
        cin>>arr[i];
        if(arr[i]>=0)
        {
            hired+=arr[i];
        }
        else if(arr[i]==-1)
        {
            if(hired>0)
            {
                hired-=1;
            }
            else
            {
                untreated+=1;
            }
        }
    }
    cout<<untreated<<endl;
    return 0;
}
