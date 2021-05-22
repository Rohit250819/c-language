# include<stdio.h>

int main(){
    int year;
    printf("Enter the year to check whether is it leap year or not!\n");
    scanf("%d",&year);
    if(year%4==0){
        printf("Dude this is a leap year\n");
    }
    else{
        printf("Sorry, This is not a leap year\n");
    }

    return 0;
}