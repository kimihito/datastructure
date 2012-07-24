#include <stdint.h>

#define MAXN 100
#define MAXM MAXN - 1

struct queue{
  int key;
  struct queue *before;
};

struct queuehead{
  struct queue *top, *rear;
} q[MAXN];

int n, A[MAXN];

main(){
  inputdata();
  bucketsort();
}

bucketsort()
{
  int i;
  for(int i = 1; i <= MAXM; i++) initqueue(i);
  for(int i = 1; i <= n; i++) enqueue(A[i],A[i]);

  printf("ソートずみデータ\n");
  for(i = 1; i <= MAXM; i++) printqueue(i);
  printf("\n");
}

initqueue(i)
  int i;
{
  q[i].top = NULL; q[i].rear = NULL;
}

printqueue(i)
  int i;
{
  struct queue *new, *w;

  new = (struct queue *)malloc(sizeof(struct queue));
  new->key = k;
  new->before = NULL;
  if((w = q[i].rear)!=NULL){
    q[i].rear = new;
    w->before = new;
  }
  else{
    q[i].rear = new;
    q[i].top = new;
  }
}

dequeue(i)
  int i;
{
  struct queue *w;
  int key;

  w = q[i].top;
  key = w->key;
  q[i].top = w->before;
  if(q[i].top == NULL) q[i].rear = NULL;
  free(w);
  return (key);
}
