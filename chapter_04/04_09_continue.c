# include<stdio.h>

int main(){
    int skip=6,i=0;

    while(i<10){
        ++i;
        if(i!=skip){
          continue;
        }
        else{
            printf("Your number is %d\n",i);
        }
       
    }

    return 0;
}