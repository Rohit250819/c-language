# include<stdio.h>

int main(){
    int a=545;
    int*e=&a;
    printf("The adress of a is %u\n",&a);
    printf("The value of variable a is %u\n",*e);
    return 0;
}