# include<iostream>
using namespace std;
int main ()
{
	int n,m,g,i,j;
	cin>> n>>m>>g;
	int count =0;
	int arr1[n],arr2[m];
	
	for(i=0 ;i<n;i++)
	{
		cin>>arr1[i];
    }
    for(i=0;i<m;i++)
	{
		cin>>arr2[i];
	}
	for(i=0;i<n-1;i++)
	{
		for (j=0;j<m;j++)
		{

		if(arr1[i+1]-arr1[i]>=arr2[j]&&g!=0)
		{
			count++;
			arr2[j]=32000;
		}
		
		}
		g--;
	}
	cout<<count;
}
