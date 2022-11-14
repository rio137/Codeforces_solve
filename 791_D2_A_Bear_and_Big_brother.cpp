#include<iostream>
using namespace std;
int main()
{
    int a,b,elder,younger,counter=0;
    cin>>a>>b;
    elder=a;
    younger=b;
    while(elder<=younger)
    {
        elder=3*elder;
        younger=2*younger;
        counter+=1;
    }
    cout<<counter<<endl;
    return 0;
}
