#include <stdio.h>

main()
{
  int b[10][10], n,i,j;

  printf("\n");
  printf("::::二次元配列へのデータ入力::::\n");
  printf("要素数を入力してください:");
  scanf("%d", &n);
  printf("\n");
  for(i = 0; i < n; i++){
    printf("第%d行の入力\n",i);
    for(j = 0; j < n; j++){
      printf("データを入力してください");
      scanf("%d",&b[i][j]);
    }
    printf("\n");
  }
  printf("\n");
  printf("----------------------\n");
  printf("入力したデータ\n");
  printf("\n");
  printf("要素数 %d x %d の配列\n", n, n);
  printf("    ");
  for(i = 0; i < n; i++){
    printf("---");
  }
  printf("\n");
  for(i = 0; i < n; i++){
    printf("%2d  |",i);
    for(j = 0; j < n; j++)
      printf("%3d",b[i][j]);
    printf("\n");
  }
  
}
