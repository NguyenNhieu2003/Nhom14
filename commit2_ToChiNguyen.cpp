void InterchangeSort(int a[], int N)
{
	int i, j;
	for(i=1; i<=N; i++)
		for(j=i+1; j<=N; j++)
			if(a[j]< a[i])
				Hoanvi(a[i],a[j]);
				
}
