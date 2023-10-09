#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct {
    char Name[20];
    int Rollnumber;
    char Department[10];
    int Session;
}StudentID;

int main(void){
    // StudentID a;
    
    // strcpy(a.Name,"Tuman Sutradhar");
    // a.Rollnumber = 20223045;
    // strcpy(a.Department,"Information Technology");
    // a.Session = 2022-2026;

    // StudentID *b;
    // b = &a ;
    // strcpy(b->Name,"Sunita Saha");
    // b->Rollnumber = 20223046;
    // strcpy(b->Department,"Information Tecnology");
    // b->Session = 2022-2026;

    StudentID *c;
    c = malloc(sizeof(StudentID));
    strcpy(c->Name,"Suhani Dey");
    c->Rollnumber = 20223047;
    strcpy(c->Department,"IT");
    c->Session = 20222026;

    printf("Name is %s, Roll is %d, Dept is %s, Session is %d",c->Name,c->Rollnumber,c->Department,c->Session);
    // printf(" Roll is %d",c->Rollnumber);

    return 0;
    
}