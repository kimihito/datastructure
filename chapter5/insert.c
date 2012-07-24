#include <stdio.h>
#define MAXN 100
int A[MAXN], n;

main()
{
  inputdata();
  insertsort(1,n);
  printdata();
}

insertsort(p,q)
  int p, q;
{
  int i, j, c;
  for(j = p+1; j <= q; j++){
    c = A[i]; i = j;
    while(i > p && A[i-1] > c){
      A[i] = A[i-1]; i = i-1;
    }
    A[i] = c;
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
