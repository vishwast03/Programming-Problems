#include<iostream>
using namespace std;
int main()
{    int t;    
     cin>>t;
     while(t--)    
     {        
          int n,k,p;        
          cin>>n;        
          int a[n];
          cin>>k;
          for(int i=0;i<n;i++)
          {
              cin>>a[i];        
          }        
          k%=n;
          for(int i=0;i<n;i++)
          {
               p = a[(i+(n-k))%n];
               cout<<p<<" ";
          } cout<<"\n";
      }
return 0;
}