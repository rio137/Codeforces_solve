#include<iostream>
using namespace std;
int main()
{
    unsigned int s1,s2,s3,s4,counter=0;
    cin>>s1>>s2>>s3>>s4;
    if(s1==s2 || s1==s3|| s1==s4)
    {
        counter+=1;
    }
    if(s2==s3 || s2==s4)
    {
        counter+=1;
    }
    if(s3==s4)
    {
        counter+=1;
    }
    cout<<counter<<endl;
    return 0;
}
