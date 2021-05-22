# include<stdio.h>
 int sum(int a,int b);
int main(){
    int c;
    c=sum(1,13);
    printf("The value of sum is\n %d\n",c);

    
    return 0;
}
int sum(int a,int b){
    int c;
    c=a+b;
    return c;
}