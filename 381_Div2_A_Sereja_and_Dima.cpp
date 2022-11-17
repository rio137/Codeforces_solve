#include<bits/stdc++.h>
using namespace std;
int main()
{
    int sizes,sum1=0,sum2=0,temp=0,flag=0,inc=0;//flag 0 means sereja,sum1
    cin>>sizes;
    temp=sizes;
    int arr[sizes];
    for(int i=0;i<sizes;i++)
    {
        cin>>arr[i];
    }
    sizes=sizes-1;
        while(temp>0)
    {
        if(arr[inc]>arr[sizes])
        {

            if(flag==0)
            {
              sum1+=arr[inc];
              flag=1;
            }
            else{
                sum2+=arr[inc];
                flag=0;
            }
            inc+=1;
        }
        else
        {
            if(flag==0)
            {
              sum1+=arr[sizes];
              flag=1;
            }
            else{
                sum2+=arr[sizes];
                flag=0;
            }
            sizes-=1;
        }
        temp-=1;
    }
    cout<<sum1<<" "<<sum2<<endl;
    return 0;
}
