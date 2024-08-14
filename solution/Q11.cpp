#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter the number of lines"<<endl;
    cin>>n;
    //down bridge
    int nstd1=n-1;
    int nstd2=n-1;
    int nspd=1;

// upper bridge
    int nstu1=1;
    int nstu2=1;
    int m=n-1;
    int nspu=2*m-1;

    //down bridge
    for(int i=1;i<=1;i++)
   {
   
    for(int j=1;j<=2*n-1;j++)
    {
        cout<<"*";
    }
     cout<<endl;
   }
   for(int i=2;i<=n;i++)
   {
   
    for(int j=1;j<=nstd1;j++)
    {
        cout<<"*";
    }
    nstd1--;
    for(int k=1;k<=nspd;k++)
    {
        cout<<" ";
    }
    nspd=nspd+2;
    for(int l=1;l<=nstd2;l++)
    {
        cout<<"*";
    }
    nstd2--;
    
     cout<<endl;
   }

   
// upper bridge
   for(int i=1;i<=m;i++)
   {
   
    for(int j=1;j<=nstu1;j++)
    {
        cout<<"*";
    }
    nstu1++;
    for(int k=1;k<=nspu;k++)
    {
        cout<<" ";
    }
    nspu=nspu-2;
    for(int l=1;l<=nstu2;l++)
    {
        cout<<"*";
    }
    nstu2++;
    
     cout<<endl;
   }
   for(int i=n;i<=n;i++)
   {
   
    for(int j=1;j<=2*n-1;j++)
    {
        cout<<"*";
    }
     cout<<endl;
   }



}