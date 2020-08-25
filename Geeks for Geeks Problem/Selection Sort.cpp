#include<iostream>
using namespace std;

int selectionSort (int arr[] ,int n)
{
	for(int i=0;i<n-1;i++)
	{
		 int min_index=i;
		for(int j=i;j<=n-1;j++)
		{
			if(arr[j]<arr[min_index])
			{
				min_index=j;
			}
		}
		swap(arr[i],arr[min_index]);
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
	
	selectionSort(arr,n);
	for(int i=0;i<n;i++)
	{
		cout<<arr[i]<<endl;
	}
}
