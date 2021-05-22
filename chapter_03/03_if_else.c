# include<stdio.h>

int main(){
    int a;
    printf("Enter your age\n");
    scanf("%d",&a);

    if(a<18){
        printf("You cannot drive, too young\n");
    }
    else{
        printf("You can drive, mature enough\n");
    }

    if(a=66){
        printf("Nice boy\n");
    }
    return 0;
}