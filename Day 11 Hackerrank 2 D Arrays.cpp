#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a[6][6]={0};
    for(int i=0;i<6;i++)
    {
        for(int j=0;j<6;j++)
        {
            cin>>a[i][j];
        }
    }
    int msum=-1000;
    for(int i=1;i<5;i++)
    {
        for(int j=1;j<5;j++)
        {
            int d=a[i][j]+a[i-1][j]+a[i-1][j-1]+a[i-1][j+1]+a[i+1][j]+a[i+1][j-1]+a[i+1][j+1];
            if(d>msum)
            {
                msum=d;
            }
        }
    }
    cout<<msum;
}
