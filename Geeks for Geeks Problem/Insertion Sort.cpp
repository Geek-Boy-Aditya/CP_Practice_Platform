#include<iostream>
using namespace std;

int insertionSort (int arr[] ,int n)
{
	for(int i=0;i<n;i++)
	{
		int e=arr[i];
		int j=i-1;
		while(j>=0 and arr[j]>e)
		{
			arr[j+1]=arr[j];
			j=j-1;
		}
		arr[j+1]=e;
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
	
	insertionSort(arr,n);
	for(int i=0;i<n;i++)
	{
		cout<<arr[i]<<endl;
	}
}
