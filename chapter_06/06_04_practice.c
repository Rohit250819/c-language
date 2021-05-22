# include<stdio.h>
void printadd(int a);
int main(){
    int a=3;
    printadd(a);
    printf("The value of the adress of a is %u\n",&a);
    return 0;
}
void printadd(int a){
    printf("The value of adress of a is %u\n",&a);
}