#include <stdio.h>

main()
{
  int a[10], n,i;

  printf("\n");
  printf("::::一次元配列へのデータ入力::::\n");
  printf("要素数を入力してください:");
  scanf("%d", &n);
  printf("\n");
  for(i = 0; i < n; i++){
    printf("データを入力してください:");
    scanf("%d", &a[i]);
  }
  printf("\n");
  printf("----------------------\n");
  printf("入力した整数列(要素数 %d)\n",n);
  for(i = 0; i < n; i++)
    printf("cbt[%d] = %d\n",i,a[i]);
  
}
