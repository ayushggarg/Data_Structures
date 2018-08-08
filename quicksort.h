//#include<iostream>
using namespace std;

int partition(int arr[], int start, int end)
{
	int i, j, key, temp;
	key = arr[end];
	i = start-1;
	for(j=start; j<end; j++)
	{
		if(arr[j] < key)
		{
			i++;
			swap(arr[i], arr[j]);
		}
	}
	i++;
	swap(arr[i], arr[j]);
	return i;
}

int quicksort(int arr[], int start, int end)
{
	int q;
	if(start < end)
	{
		q = partition(arr, start, end);
		quicksort(arr, 0, q-1);
		quicksort(arr, q+1, end);
	}
}

