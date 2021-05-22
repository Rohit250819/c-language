# include<stdio.h>

int main(){
    int age;
    int vippass=0;
    printf("Enter your age\n");
    scanf("%d",&age);

    if((age<=90 && age>=18)|| !(vippass==1)){
        printf("You can drive, mature enough but not dead");
    
    }
    else{
        printf("You can't drive baby you are dead or mama's boy");
    }
    
    return 0;
}