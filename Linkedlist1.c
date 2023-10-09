#include <stdio.h>
#include <stdlib.h>
typedef struct node{
     int data;
     struct node *next;
    
}node ;

node *createnode (int n){
   node *p, *q , *r ;

   p= (node *)malloc(sizeof(node));
   scanf("%d",&(p->data));
   p->next = NULL ;

   q=p;

   for(int i = 0 ; i<n-1 ; i++){
    r = (node *)malloc(sizeof(node));
    scanf("%d",& (r->data));
    r ->next = NULL;
    q->next = r;

    q= r;
   }
  return p ;
}

void traverse (node *p){
  node *t;
  t=p;

  while(t != NULL){
    printf("%d",&(t->data));
    t= t->next;
  }
  p = t;
}

void insertion (node **p , int i , node *t){
  node *q ,*x ;
  if (i == 0){
    t->next =*p ;
    *p =t ;
  }
  else {
    q= *p;
    for (int j = 0 ; (j<i) &&(q!= NULL) ; j++){
      x = q ;
      q->next =q ;
    }
    t->next =x->next ;
    x->next =t ;
  }
}

