#include <stdio.h>
#include<string.h>

typedef struct 
{
    char Name[20];
    int Rollnumber;
    char Department[10];
    int Session;
}BhootBariID;


int main(void){
    BhootBariID a;

    strcpy(a.Name,"Lullu Vut");
    a.Rollnumber = 102 ;
    strcpy(a.Department,"SamshanGhat");
    a.Session =2226;

    printf("Name is %s\n",a.Name);
    printf("Name is %d\n",a.Rollnumber);
    printf("Name is %s\n",a.Department);
    printf("Name is %d\n",a.Session);

    return 0;
}