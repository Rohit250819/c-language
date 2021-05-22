# include<stdio.h>

int main(){
    int a=34;
    int * ptr;
    int **ptr_ptr;
    int ***ptr_ptr_ptr;
    ptr=&a;
    ptr_ptr=&ptr;
    ptr_ptr_ptr=&ptr_ptr;
    printf("The value of i is %u\n",**ptr_ptr);
    printf("The value of i is %d\n",*ptr);
    printf("The value of i is %u\n",***ptr_ptr_ptr);
    return 0;
}