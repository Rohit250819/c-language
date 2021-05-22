# include<stdio.h>
struct employee{
    int code;
    float salary;
    char name[25];
};

int main(){
    struct employee facebook={101,34.5,"Rohit"};
    printf("code :%d\n",facebook.code);
    printf("salary :%.2f\n",facebook.salary);
    printf("name :%s\n",facebook.name);
    


    return 0;
}