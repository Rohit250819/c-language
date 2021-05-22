# include<stdio.h>

int main(){
    int principal,rate,time;
     printf("Principal amount is\n");
     scanf("%d",&principal);

     printf("rate is\n");
     scanf("%d",&rate);

     printf("Time in year\n");
     scanf("%d",&time);

     printf("The simple interest is %drupees",(principal*time*rate)/100);

    
    return 0;
}