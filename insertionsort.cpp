#include<iostream>
using namespace std;

int insertionsort(int arr[],int len)
{
	int i,j,key;
	for(j=1;j<len;j++)
	{
		key=arr[j];
		for(i=j-1;i>=0&&arr[i]>key;i--)
		{
			arr[i+1]=arr[i];
		}
		arr[i+1]=key;
	}
	
	for(i=0;i<len;i++)
		cout<<arr[i]<<"\t";
}

int main()
{
	int i,len,arr[10];
	cin>>len;
	for(i=0;i<len;i++)
		cin>>arr[i];
	insertionsort(arr,len);
	cout<<endl;
}
