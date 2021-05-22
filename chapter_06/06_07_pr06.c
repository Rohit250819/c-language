# include<stdio.h>
int tentimes(int a);

int main(){
    int s=5;
    tentimes(s);
    printf("Ten times of %d is %d\n",s,tentimes(s));
    return 0;
}
int tentimes(int a){
    int x=10*(a);
    a=8;
    return x;
}