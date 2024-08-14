#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter the number of lines"<<endl;
    cin>>n;
    int nst1=n-1;
    int nst2=n-1;
    int nsp=1;
    for(int i=1;i<=1;i++)
   {
    for(int j=1;j<=2*n-1;j++)
    {
       cout<<j;
    }
   
    cout<<endl;
   }
   for(int i=2;i<=n;i++)
   {
    int a=0;
    for(int j=1;j<=nst1;j++)
    {
       cout<<++a;
       
    }
    nst1--;
    for(int k=1;k<=nsp;k++)
    {
       cout<<" ";
       
    }
    nsp+=2;
    for(int j=1;j<=nst2;j++)
    {
       cout<<a;
       a--;
    }
    nst2--;
    cout<<endl;
   }
}