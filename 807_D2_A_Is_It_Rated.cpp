#include<bits/stdc++.h>
using namespace std;
int main()
{
    int sizes,flag=0,flag1=0;
    cin>>sizes;
    int arr[sizes],brr[sizes];
    for(int i=0;i<sizes;i++)
    {
        cin>>arr[i];
        cin>>brr[i];
        if(arr[i]!=brr[i])
        {
            flag=1;
        }
    }
    if(flag==1)
    {
        cout<<"rated"<<endl;
    }
    else{
        for(int i=0;i<sizes;i++)
        {
            if(i!=sizes-1)
            {
                if(arr[i+1]>arr[i])
            {
                flag1=1;

            }
            }

        }
        if(flag1==0)
        {
            cout<<"maybe"<<endl;
        }
        else
        {
            cout<<"unrated"<<endl;
        }
    }
    return 0;
}
