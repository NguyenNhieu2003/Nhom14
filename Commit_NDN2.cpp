Void shift (int a[], int l, int r )
{ int x, i, j;
  i = 1;
   j = 2 * i;
x = a [i];
while (j<=r)
{
    if (i<r)
    if(a[j]<a[j+1])
    j = j+1;
    if (a[j]<x)
    break;
    else
    { a[i] = a[j]};
    i=j;
    j=2*i;
}
Void CreateHeap (int a[], int N)
{ int l;
l = N/2;
while (l>0)
{
  Shift(a,l,N);
  l = l -1;
}
}
Khi đó hàm Heapsort có dạng sau:
void HeapSort (int a[], int N)
{ int r;
CreateHeap(a,N)
r = N;
while(r >0)
{
  Hoanvi (a[l],a[r]);
  r = r -1;
  Shift(a,l,r);
}
}
