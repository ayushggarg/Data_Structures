#include<iostream>
using namespace std;

int merge(int arr[],int f, int q, int len)
{
	int left, right;
	left = q-f+1;
	right = len-q;
	int l[left], r[right];
	for(int i=0; i<left; i++)
		l[i] = arr[f+i];
	for(int j=0;  j<right; j++)
		r[j] = arr[q+1+j];
	int i=0, j=0;
	for(int k=f; (k<=len) && (i <= q); k++)
	{
		if(l[i]<r[j])
		{
			arr[k] = l[i];
			i++;
		}
		else
		{
			arr[k] = r[j];
			j++;
		}
	}	
}

int sort(int arr[],int f, int len)
{
	int q=0;
	if(f < len)
	{
		q=(f+len)/2;
		//cout<<q;
		sort(arr,0,q-1);
		sort(arr,q+1,len);
		cout<<len<<endl;
		merge(arr,f,q,len);
	}
}

int main()
{
	int i,len,arr[10];
	cin>>len;
	for(i=0;i<len;i++)
		cin>>arr[i];

	sort(arr,0,len-1);

	for(i=0;i<len;i++)
		cout<<arr[i]<<"\t";
	cout<<endl;
}
