# include<stdio.h>

int main(){
    int num1;
    int num2;
    int num3;
    printf("Enter num 1\n");
    scanf("%d",&num1);
    
    printf("Enter num 2\n");
    scanf("%d",&num2);
    
    printf("Enter num 3\n");
    scanf("%d",&num3);
    if (num1>num2 && num1>num3){
        printf("Greatest is %d",num1);
    }
    else if(num2>num1 && num2>num3){
        printf("Greatest is %d",num2);
    }
    else if(num3>num1 && num3>num2){
        printf("Greatest is %d",num3);
    }
    else{
       printf("No one is greater") ;
    }
    
    return 0;
}