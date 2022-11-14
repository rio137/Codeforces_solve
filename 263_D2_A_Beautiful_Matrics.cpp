#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    int arr[5][5],mypi,mypj,res;
    for(int i=0;i<5;i++)
	  {
	  	for(int j=0;j<5;j++)
	  	{
	  		cin>>arr[i][j];
	  		if(arr[i][j]==1)
	  		{
	  		    mypi=i+1;
	  		    mypj=j+1;
	  		}
		}
	  }
	  res = abs(mypi-3)+abs(mypj-3);
	  cout<<res<<endl;
	  //cout<<mypi<<" "<<mypj<<endl;
    return 0;
}
