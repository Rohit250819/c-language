# include<stdio.h>
struct employee{
    int code;
    float salary;
    char name[20];
};

int main(){
    struct employee e1;
    e1.code;
    e1.salary;
    e1.name;
    printf("Enter the code for 1:\n");
    scanf("%d",&e1.code);
    printf("Enter the salary for 1:\n");
    scanf("%f",&e1.salary);
    printf("Enter the name for 1:\n");
    scanf("%s",e1.name);
    struct employee e2;
    e2.code;
    e2.salary;
    e2.name;
    printf("Enter the code for 2:\n");
    scanf("%d",&e2.code);
    printf("Enter the salary for 2:\n");
    scanf("%f",&e2.salary);
    printf("Enter the name for 2:\n");
    scanf("%s",e2.name);
    struct employee e3;
    e3.code;
    e3.salary;
    e3.name;
    printf("Enter the code for 3:\n");
    scanf("%d",&e3.code);
    printf("Enter the salary for 3:\n");
    scanf("%f",&e3.salary);
    printf("Enter the name for 3:\n");
    scanf("%s",e3.name);

    printf("Employee 1 details:\n code :%d\n salary:%.2f\n name:%s\n",e1.code,e1.salary,e1.name);
    printf("Employee 2 details:\n code :%d\n salary:%.2f\n name:%s\n",e2.code,e2.salary,e2.name);
    printf("Employee 3 details:\n code :%d\n salary:%.2f\n name:%s\n",e3.code,e3.salary,e3.name);
    
    return 0;
}