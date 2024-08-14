       /*
           A
         B A B
       C B A B C
     D C B A B C D

     */

#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter the number of lines"<<endl;
    cin>>n;
    int nsp=n-1;
    int nst1=1;
    int nst2=1;
   for(int i=1;i<=n;i++)
   {
    for(int j=1;j<=nsp;j++)
    {
       cout<<" ";
    }
    nsp--;
    for(int k=nst1;k>=1;k--)
    {
       cout<<char(k+64);
    }
    nst1++;
    for(int l=2;l<=nst2;l++)
    {
       cout<<char(l+64);
    }
    nst2++;
    cout<<endl;
   }
}