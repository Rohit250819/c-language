# include<stdio.h>

int main(){
    int a,n;
    printf("Enter the no.\n");
    scanf("%d",&n);
    for(int a=n;a;--a){
        printf("The value of a is %d\n",a);
    }
    return 0;
}