//#include<iostream>
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
	
}

