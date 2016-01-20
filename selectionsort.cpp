#include<iostream>
using namespace std;

int selectionsort(int arr[],int len)
{
	int i,j,k,pos,temp;
	for(i=0;i<len;i++)
	{
		k=arr[i];
		pos=i;
		for(j=i+1;j<len;j++)
		{
			if(arr[j]<k)
			{
				k=arr[j];
				pos=j;	
			}
		}
		temp=arr[i];
		arr[i]=k;
		arr[pos]=temp;
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
	selectionsort(arr,len);
	cout<<endl;
}
