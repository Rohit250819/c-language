# include<stdio.h>
typedef struct employee{
    char name[20];
    int salary;
}data;

int main(){
    data e1,e2;
    FILE*ptr;
   
    printf("Enter the name of first person:\n");
    scanf("%c",&e1.name);
    printf("salary of person 1\n");
    scanf("%d",&e1.salary);

    printf("Enter the name of second person:\n");
    scanf("%c",&e2.name);
    printf("salary of person 2\n");
    scanf("%d",&e2.salary);

    ptr=fopen("data.txt","w");
    putc(e1.name,ptr);
    putc(e1.salary,ptr);
    putc(e2.name,ptr);
    putc(e2.salary,ptr);
    fclose(ptr);


    return 0;
}