#include<iostream>
using namespace std;
int main()
{
    int sizes,fence_height,total=0,flag=1;
    cin>>sizes>>fence_height;
    int arr[sizes];
    for(int i=0;i<sizes;i++)
    {
        cin>>arr[i];
        if(arr[i]>fence_height)
        {
            flag=2;
            total+=flag;
        }
        else
        {
            flag=1;
            total+=flag;
        }
    }
    cout<<total<<endl;
    return 0;
}
