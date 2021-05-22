# include<stdio.h>

int main(){
    int i=0,sum=0,n;
    printf("Enter the number\n");
    scanf("%d",&n);
    do {
        sum+=i;
        ++i;
    }while(i<=n);
    printf("The value of sum(1 to %d) is %d",n,sum);
    return 0;
}