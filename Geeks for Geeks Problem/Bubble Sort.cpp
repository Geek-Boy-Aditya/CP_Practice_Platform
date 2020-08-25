#include<iostream>
using namespace std;

int bubbleSort (int arr[] ,int n)
{
	for(int itr=1;itr<=n-1;itr++)
	{
		for(int j=0;j<=(n -itr-1);j++)
		{
			if(arr[j]>arr[j+1])
			{
			swap(arr[j],arr[j+1]);
			}
		}
		

}
}
int main ()
{
	int n;
	int arr[10]={0};
	cin>>n;
	for(int i=0;i<n;i++)
	{
		cin>>arr[i];
	}
	
	bubbleSort(arr,n);
	for(int i=0;i<n;i++)
	{
		cout<<arr[i]<<endl;
	}
}
