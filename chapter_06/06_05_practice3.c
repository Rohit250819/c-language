# include<stdio.h>
int tentimes(int * a);

int main(){
    int a=2;

    printf("The increased value of a is %d",tentimes(&a));
    
    return 0;
}
int tentimes(int * a){
    int temp=*a;
    int result;
    result=temp*10;
    return result;
}