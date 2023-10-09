#include <stdio.h>
#include <stdlib.h>

typedef struct node{
    int data;
    struct node *right , *left ;
}node ;

node *createDoublelist(int n){
   node *p , *q , *r ;

   p =(node *)malloc(sizeof(node));
   scanf("%d",&(p-> data));
   p->left = NULL ;
   p ->right = NULL ;

   q= p;

   for(int j =0 ; j< (n-1) ; j++ ){
    r =(node *)malloc(sizeof(node));
    scanf("%d",&(r ->data));
    r ->right = NULL;
    r ->left = q;
    q ->right = r;

    q = r;
   }
   return p;
}
void traverse (node *p){
    node *t;
    t = p;

    while(t != NULL){
        printf("%d",&(t ->data));
        t->right =t ;
    }
    p =t ;

}

void insertion(node **p , int i , node *t){
    node *q, *x ;
    if( i== 0){
        
        t->right =*p;
        t =*p ;
    }
    else{
        q =*p;
        for (int j = 0; j < (i - 1) && (q != NULL); j++){
            q =q->right ;
        }
        if(q->right != NULL){
            q->right ->left =t ;
        }
        q ->right =t;
        t->left  =q ;
    }
}