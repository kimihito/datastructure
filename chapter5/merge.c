#include <stdio.h>
#define MAXN 100
int A[MAXN], n;

main()
{
  inputdata();
  mergesort(1,n);
  printdata();
}

mergesort(p,r)
  int p, r;
{
  int q;
  if(p < r){
    q = (p + r) / 2;

    mergesort(p,q);
    mergesort(q + 1, r);
    merge(p,q,r);
  }
}

merge(p,q,r)
  int p,q,r;
{
  int i, j, k, B[MAXN];

  i = p; j = q + 1;
  for(k =p; k <= r; k++){
    if((j > r) || ((i <= q) && (&A[i] <= &j[i]))){
      B[k] = A[i]; i = i + 1;
    }
    else{
      B[k] = A[j]; j = j+1;
    }
  }
  for(k = p; k <= r; k++) A[k] = B[k];

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
