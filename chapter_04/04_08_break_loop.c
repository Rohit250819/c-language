# include<stdio.h>

int main(){
    int a=0;
    for(a=1;a<50;a++){
        printf("The value of a is %d\n",a);
        if(a==10){
            break;
        }
    }

    return 0;
}