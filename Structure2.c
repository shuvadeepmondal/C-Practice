#include<stdio.h>
#include<string.h>

typedef struct {
    char Name[20];
    int CodeNumber;
    char Domain[15];
}Coder;

int main(void){
    Coder c;

    strcpy(c.Name,"Puskar Roy");
    c.CodeNumber = 001;
    strcpy(c.Domain,"Web Devlopment");

    printf("Your Id \n");
    printf("Name : %s \n",c.Name);
    printf("CodeNumber : %d \n",c.CodeNumber);
    printf("Domain : %s \n", c.Domain);

    return 0;

}
