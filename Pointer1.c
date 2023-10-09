#include<stdio.h>
#include<string.h>

typedef struct {
    char Name[20];
    int Phonenumber;
    char Address[25];
}Client;

int main(void){
    Client a;
    
    strcpy(a.Name,"Sujan Mahato");
    a.Phonenumber = 1452639872;
    strcpy(a.Address,"Burdwan");

    // printf("Name : %s \n", a.Name);
    // printf("Phonenumber : %d \n", a.Phonenumber);
    // printf("Address: %s ", a.Address);

    Client *b;
    b = &a;
    strcpy(b->Name,"Sukhen Paul");
    b->Phonenumber = 3211456789;
    strcpy(b->Address,"Barasat");

    // printf("Name : %s \n", a.Name);
    // printf("Phonenumber : %d \n", a.Phonenumber);
    // printf("Address: %s ", a.Address);
    printf("Name : %s \n", a.Name);
    printf("Phonenumber : %d \n", a.Phonenumber);
    printf("Address: %s ", a.Address);


    return 0;
}