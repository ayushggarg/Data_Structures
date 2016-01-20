#include<iostream>
using namespace std;

int bubblesort(int arr[],int len)
{
	int i,j,temp;
	for(i=0;i<len;i++)
	{
		for(j=i;j<len;j++)
		{
			if(arr[i]>arr[j])
			{
				temp=arr[i];
				arr[i]=arr[j];
				arr[j]=temp;
			}
		}
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
	bubblesort(arr,len);
	cout<<endl;
}
