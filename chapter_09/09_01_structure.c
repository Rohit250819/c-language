# include<stdio.h>
#include<string.h>
struct employee{
    int code;
    float salary;
    char name[15];

};

int main(){
    struct employee M1;
    M1.code=1265;
    M1.salary=354.89;
    strcpy(M1.name,"Rohit");
    printf("%d\n",M1.code);
    printf("%.2f\n",M1.salary);
    printf("%s\n",M1.name);
    
    return 0;
}