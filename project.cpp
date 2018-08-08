#include<time.h>
#include<iostream>
#include<stdlib.h>

#include</home/ayush/Desktop/sorting/bubblesort.h>
#include</home/ayush/Desktop/sorting/heapsort.h>
#include</home/ayush/Desktop/sorting/insertionsort.h>
#include</home/ayush/Desktop/sorting/quicksort.h>
#include</home/ayush/Desktop/sorting/selectionsort.h>

using namespace std;

int output(int arr[], int len)
{
	for(int i=0;i<len;i++)
		cout<<arr[i]<<"\t";
	cout<<endl;
}

int main() 
{
	clock_t start, end;
	int len;
	cin>>len;
	int arr[len];

	for(int i=0;i<len;i++)
	{
		arr[i]=rand()%len;
	}
	
   	//output(arr, len);
	
	start = clock();
	bubblesort(arr, len);
	//output(arr, len);
	end = clock();
    cout << ((double) (end - start)) / CLOCKS_PER_SEC<<endl<<endl;
	
	start = clock();
	heapsort(arr, len-1);
	//output(arr, len);
	end = clock();
    cout << ((double) (end - start)) / CLOCKS_PER_SEC<<endl<<endl;

	start = clock();	
	insertionsort(arr, len);
	//output(arr, len);
	end = clock();
    cout << ((double) (end - start)) / CLOCKS_PER_SEC<<endl<<endl;

	/*start = clock();
	quicksort(arr,0 , len-1);
	//output(arr, len);
	end = clock();
    cout << ((double) (end - start)) / CLOCKS_PER_SEC<<endl<<endl;*/

	start = clock();
	selectionsort(arr, len);
	//output(arr, len);
	end = clock();
    cout << ((double) (end - start)) / CLOCKS_PER_SEC<<endl<<endl;
}
