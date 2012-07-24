#include <stdio.h>
#include <stdlib.h>

#define VMAX 100
#define EMAX 10000

struct vertex{
  int ename;
  struct vertex *next;
} *outhead[VMAX], *inhead[VMAX];

int status, out[EMAX], in[EMAX], n,m;

main()
{
  printf("\n");
  printf("::::無向グラフはstatusに0を、有向グラフは1を入力してください::::\n");
  printf("status: = ");
  scanf("%d",&status);
  printf("\n");

  input_graph();
  print_graph();
}

input_graph()
{
  int i, v, w;
  printf("頂点数を入力してください\n");
  scanf("%d", &n);
  printf("辺数を入力してください\n");
  scanf("%d", &m);

  printf("%d個の変それぞれの両端点を、始点番号, スペース,終点番号,リターンの順で入力してください\n",m);
  if(status ==0)
    printf("ただし、無向グラフなので、始点、終点の区別は不要です\n");
  for(i = 1; i <= n; i++) outhead[i] = NULL;
  if(status == 1)
    for(i = 1; i <= n; i ++) inhead[i] =NULL;
  for(i = 1; i <= m; i++){
    printf("辺%d: ",i);
    scanf("%d %d", &v, &w);
    out[i] = v; in[i] = w;
    addlist(v,w,i);
  }
  
}

addlist(v,w,e_num)
  int v, w, e_num;
{
  struct vertex *new, *work;

  new = (struct vertex *)malloc(sizeof(struct vertex));
  new->ename = e_num;
  work = outhead[v];
  outhead[v] = new;
  new->next = work;
  new = (struct vertex *)malloc(sizeof(struct vertex));
  new->ename = e_num;
  if(status == 0){
    work = outhead[w];
    outhead[w] = new;
  }
  else{
    work = inhead[w];
    inhead[w] = new;
  }
  new->next = work;
}

print_graph()
{
  int k, v, w;
  struct vertex *work;

  printf("入力したグラフの出力\n");
  printf("n(点数): %d m（辺数）: %d \n", n, m);
  if(status == 1)
    printf("出力リスト\n");
  for(v = 1; v <= n; v++){
    printf("%d ", v);
    work = outhead[v];
    while(work != NULL){
      w = work->ename;
      if(out[w] == v) k = in[w];
      else k = out[w];
      printf("e%d(%d) ", work->ename, k);
      work = work->next;
    }
    printf("\n");
  }
  printf("\n");
  if(status == 1){
    printf("入力リスト\n");
    for(v = 1; v <= n; v++){
      printf("%d ", v);
      work = inhead[v];
      while(work != NULL){
        w = work->ename;
        if(out[w] == v) k = in[w];
        else k = out[w];
        printf("e%d(%d) ", work->ename, k);
        work = work->next;
      }
      printf("\n");
    }
    printf("\n");
  }
}
