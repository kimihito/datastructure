#include <stdio.h>

struct stack{
  int key;
  struct stack *next;
} *s;

initstack()
{
  s = NULL;
}

push(k)
  int k;
{
  struct stack *new;

  new = (struct stack *)malloc(sizeof(struct stack));
  new->key = k;
  new->next = s;
  s = new;
}

pop()
{  
  struct stack *w;

  w = s;
  s = w ->next;
  free(w);
}
