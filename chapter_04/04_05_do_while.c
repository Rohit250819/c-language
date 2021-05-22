# include<stdio.h>

int main(){
    int i = 0;
    int n;
    printf("Enter your number\n");
    scanf("%d",&n);

    do{
        printf("The value of i is %d\n",i+5);
        i++;
    }while(i<n);
    return 0;
}