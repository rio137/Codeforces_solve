#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    long int counter=0;
    string str;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>str;
        transform(str.begin(),str.end(),str.begin(),::tolower);
        if(str=="tetrahedron")
        {
            counter+=4;
        }
        else if(str=="cube")
        {
            counter+=6;
        }
        else if(str=="octahedron")
        {
            counter+=8;
        }
        else if(str=="dodecahedron")
        {
            counter+=12;
        }
            else if(str=="icosahedron")
            {
                counter+=20;
            }
            else
                counter+=0;
    }
    cout<<counter<<endl;
    return 0;
}
