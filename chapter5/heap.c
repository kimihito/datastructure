#include <stdio.h>
#define MAXN 100
int A[MAXN], n;

main()
{
  inputdata();
  heapsort(1,n);
  printdata();
}

heapsort(s,t)
  int s,t;
{
  int i;
  makeheap(s,t);
  for(i = t; i >= s+1; i--){
    swap(s,i);
    heapify(s,i-1);
  }
}

makeheap(s,t)
  int s,t;
{
  int i;

  for(i = t; i >= s; i--) heapify(i,t);
}

heapify(p,q)
  int p,q;
{
  int r;
  r = 2 * p;
  if(r <= q){
    if(r < q && A[r] > A[r+1]) r = r+1;
    if(A[p] > A[r]){
      swap(p,r);
      heapify(r,q);
    }
  }
}

inputdata()
{
  int i;

  printf("データ数を入力してください\n");
  scanf("%d",&n);
  printf("データを入力してください\n");
  for(i = 1;i <= n; i++){
    scanf("%d",&A[i]);
  }
}

printdata_reverse()
{
  int i;

  printf("ソート済みデータ\n");
  for(i = 1; i >= n; i--){
    printf("%d ",A[i]);
  printf("\n");
  }
}
