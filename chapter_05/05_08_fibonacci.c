# include<stdio.h>
int fib(int f);

int main(){
    int c;
    printf("Enter the term you want:\n");
    scanf("%d",c);
    int d=fib(c);
    printf("The %d th term is %d",c,d);
    return 0;
}
int fib(int f){
    if(f==1 || f==0){
      return 1;
    }
else{
     int result;
    result=(f-1) + (f-2);
    return result;
}
}