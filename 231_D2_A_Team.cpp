#include<iostream>
using namespace std;
int main()
{
    int test_case,a,b,c,sum,counter=0;
    cin>>test_case;
    for(int i=0;i<test_case;i++)
    {
        cin>>a>>b>>c;
        sum=a+b+c;
        if(sum>=2)
            counter+=1;
        sum=0;
    }
    cout<<counter<<endl;
    counter=0;
    return 0;
}
