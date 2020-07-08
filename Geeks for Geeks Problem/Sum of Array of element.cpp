#include<iostream>
using namespace std;
int main()
 {
     int t;
     cin>>t;
     int ar[10000];
     while (t--)
     {
         int n,sum=0;
         cin>>n;
         for(int i=0;i<n;i++)
         {
         cin>>ar[i];
         }
         
         for(int i=0;i<n;i++)
         {
         sum=sum+ar[i];
         }
         cout<<sum<<"\n";
     }
     
	//code
	return 0;
}
