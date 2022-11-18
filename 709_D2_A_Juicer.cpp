#include<iostream>
using namespace std;
int main()
{
     int sum=0,counter=0;
     int n,b,d;
    cin>>n>>b>>d;
    long int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
        if(arr[i]>b)
        {
            continue;
        }
        if(sum<=d)
        {
            sum+=arr[i];
        }
        if(sum>d)
        {
            counter+=1;
            sum=0;
        }
    }
    cout<<counter<<endl;
    return 0;
}
