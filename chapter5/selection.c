#include <stdio.h>
#define MAXN 100
int A[MAXN], n;

main()
{
  inputdata();
  selectionsort(1,n);
  printdata();
}

selectionsort(p,q)
  int p, q;
{
  int i, j, cmin;
  for(j = p; j <= q; i++){
    cmin = j;
    for(i=j+1; i <= q; i++)
      if(A[cmin] > A[i]) cmin = i;
    swap(j,cmin);
      
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

printdata()
{
  int i;

  printf("ソート済みデータ\n");
  for(i = 1; i <= n; i++){
    printf("%d ",A[i]);
  printf("\n");
  }
}
