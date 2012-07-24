#include <stdio.h>

struct vertex{
  int name, key;
  struct vertex *next;
};

main()
{
  struct vertex *new, *top;
  int n, k;

  printf("\n");
  printf("::::リストへのデータ入力::::");
  printf("\n");

  printf("各要素を入力してください\n");
  top = NULL;
  while(1){
    printf("nameの値を入力してください:");
    scanf("%d",&n);
    if(n <0) break;
    printf("keyの値を入力してください:");
    scanf("%d",&k);
    new = (struct vertex *)malloc(sizeof(struct vertex));
    new->name = n;
    new->key = k;
    new->next = top;
    top = new;
    
  }
  printf("\n");
  printf("------------------\n");
  printf("入力したデータ([name],[key]の順番でヘッドに近い構造体から出力)\n");
  while(top != NULL){
    printf("[%d, %d] ", top->name, top->key);
    top = top->next;
  }
  printf("\n");
}
