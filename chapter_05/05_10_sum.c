# include<stdio.h>
int sum(int n);
int main(){
    int n;
    printf("Enter the no. of terms of which you want summation:\n");
    scanf("%d",&n);

    printf("The required summation of first %d terms is %d",n,sum(n));
    return 0;
}
int sum(int n){
    int result;
    result=n*(n+1)*0.5;
    return result;
}