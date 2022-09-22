#include <stdio.h>



void Hoanvi(int a, int b)
{
	int c = a;
	a = b;
	b = c;
}


void SelectionSort(int &a[10], int N)
{
	int min;
	for(int i=0; i<N-1; i++)
	{
		min=i;
		for(int j= i+1; j<N; j++)
			if(a[j] < a[min])
				min = j;
		Hoanvi(a[min],a[i]);
	}
}

