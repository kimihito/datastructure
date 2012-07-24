#include <stdio.h>

struct queue{
  int key;
  struct queue *before;
};

strucn queuehead{
  struct queue *top, *rear;
}q;

initqueue()
{
  q.top = NULL; q.rear = NULL;
}

enqueue(k)
  int k;
{
  struct queue *new, *w;

  new = (struct queue *)malloc(sizeof(struct queue));
  new->key = k;
  new->before = NULL;
  if((w = q.rear) != NULL){
    q.rear = new;
    w->before = new;
  }
  else{
    q.rear = new;
    q.top = new;
  }
}

dequeue()
{
  struct queue *w;
  int key;

  if (q.top == NULL){
    printf("キューが空です\n");
    key = 0;
  }
  else{
    w = q.top
    key = w->key;
    q.top = w->before;
    if(q.top == NULL) q.rear = NULL;
    free(w);
  }
  return (key);
}
