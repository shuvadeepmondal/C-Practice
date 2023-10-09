#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct{
    char Name[20];
    char Gender[1];
    int Phone;
}Organization ;

int main(void){
    Organization a;
    strcpy(a.Name,"Rahul Das");
    strcpy(a.Gender,"M");
    a.Phone = 4587965544 ;
    
    Organization *b;
    b = &a ;
    strcpy(b->Name,"Ankita Bhatyacharya");
    strcpy(b->Gender,"F");
    b->Phone = 4587965544 ;

    Organization *c;
     
    c = malloc(sizeof(Organization));
    strcpy(c->Name,"Ananya Ghosh ");
    strcpy(c->Gender,"F");
    c->Phone = 9933973411;

    printf("Organization Member \n");
    printf("Name : %s \n",c->Name);
    printf("Gender : %s \n",c->Gender);
    printf("Phone : %d \n",c->Phone);

    return 0 ;
}