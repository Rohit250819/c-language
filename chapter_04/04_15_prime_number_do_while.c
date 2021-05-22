# include<stdio.h>

int main(){
    int i=2,n,prime=1;
    printf("Enter the number which you have to check:\n");
    scanf("%d",&n);
    do{
        
        if(n%i==0){
            prime=0;
            break;
        }i++;
        
    }while(i<n);
    if(prime==0){
        printf("This is not a prime number\n");
    }
    else{
        printf("This is a prime number\n");
    }
    return 0;
}