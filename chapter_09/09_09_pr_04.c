# include<stdio.h>
struct  employee{
    int code;
    float salary;
};

int main(){
    struct employee e1;
    struct employee*ptr;
    ptr=&e1;
    (*ptr).code=101;
    (*ptr).salary=34.2;
    // ptr->code=101;
    // ptr->salary=34.2;
    // printf("%d\n",ptr->code);
    // printf("%.2f\n",ptr->salary);
     printf("%d\n",e1.code);
    printf("%.2f\n",e1.salary);
    


    
    return 0;
}