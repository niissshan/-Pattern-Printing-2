#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter the number of lines"<<endl;
    cin>>n;
   for(int i=1;i<=n;i++)
   {
    for(int j=1;j<=2*n-1;j++)
    {
        int a=i;
        int b=j;
       if(a>n) a= 2*n-i;
       if(b>n) b= 2*n-j;
       if(a+b == n+1)cout<<i;
       else cout<<" "; 
    }
    
     cout<<endl;
   }
}