# include<stdio.h>
struct employee{
 int code;
 float salary;
 char name;
};

int main(){
    struct employee e1;
    struct employee *ptr;
    ptr=&e1;
    // (*ptr).code=101; or you can write
    ptr->code=101;
    printf("%d",e1.code);

    
    return 0;
}