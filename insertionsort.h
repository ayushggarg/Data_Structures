//#include<iostream>
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
}

