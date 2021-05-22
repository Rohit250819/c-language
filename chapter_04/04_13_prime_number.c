# include<stdio.h>

int main(){
    int n,prime=1;
    printf("Enter the number you have to check:\n");
    scanf("%d",&n);
    for(int i=2;i<n;i++){
        if(n%i==0){
            prime=0;
            break;
        }
    }
    if(prime==0){
        printf("This is not a prime number\n");
    }
    else{
        printf("This is a prime number\n");
    }
    return 0;
}