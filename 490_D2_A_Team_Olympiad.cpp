#include <bits/stdc++.h>
using namespace std;
int main()
{
    int number,countOne=0,countTwo=0,countThree=0,mincnt;
    int flag1=0,flag2=0,flag3=0,anothercnt=0;
    cin>>number;
    int arr[number];
    for(int i=0;i<number;i++)
    {
        cin>>arr[i];

        if(arr[i]==1)
       {
           countOne+=1;
       }
      else if(arr[i]==2)
       {
           countTwo+=1;
       }
       else if(arr[i]==3)
       {
           countThree+=1;
       }
    }
    if(countOne<=countTwo && countOne<=countThree)
    {
        cout<<countOne<<endl;
        mincnt=countOne;
    }

    else if(countTwo<=countOne && countTwo<=countThree)
    {
        cout<<countTwo<<endl;
        mincnt=countTwo;
    }

    else if(countThree<=countOne && countThree<=countTwo)
    {
        cout<<countThree<<endl;
        mincnt=countThree;
    }
    for(int i=0;i<mincnt;i++)
    {
        for(int j=0;j<number;j++)
        {

            if(anothercnt==3)
                break;
            else{
                if(arr[j]==1 && flag1==0)
            {
                arr[j]=0;
                cout<<j+1;
                if(anothercnt!=3)
                cout<<" ";
                flag1=1;
                anothercnt+=1;
            }
            else if(arr[j]==2 && flag2==0)
            {
                arr[j]=0;
                cout<<j+1;
                if(anothercnt!=3)
                cout<<" ";
                flag2=1;
                anothercnt+=1;
            }
            else if(arr[j]==3 && flag3==0)
            {
                arr[j]=0;
                cout<<j+1;
                if(anothercnt!=3)
                    cout<<" ";
                flag3=1;
                anothercnt+=1;
            }
            }

        }
        cout<<endl;
        flag1=0;flag2=0;flag3=0;anothercnt=0;
    }

    return 0;
}
