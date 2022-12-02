#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m,flag=0;
    cin>>n>>m;
    char str[n][m];
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            cin>>str[i][j];
            str[i][j]= toupper(str[i][j]);
            if(str[i][j]=='C' || str[i][j]=='M' || str[i][j]=='Y')
            {
                flag=1;
            }

        }
    }
    if(flag==0)
        cout<<"#Black&White"<<endl;
    else
        cout<<"#Color"<<endl;
    return 0;
}
