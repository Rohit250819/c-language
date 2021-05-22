# include<stdio.h>
# include<stdlib.h>
# include<time.h>

int SnakeWaterGun(char you, char comp){
    if(you==comp){
        return 0;
    }
     if(you=='s' && comp=='g'){
        return -1;
    }
    else if(you=='g' && comp=='s'){
        return 1;
    }
     if(you=='g' && comp=='w'){
        return -1;
    }
    else if(you=='w' && comp=='g'){
        return 1;
    }
     if(you=='w' && comp=='s'){
        return -1;
    }
    else if(you=='s' && comp=='w'){
        return 1;
    }
}

int main(){
    char you,comp;
    srand(time(0));
    int num =rand()%100;
    if (num<33){
        comp='s';
    }
    if (num>=33 && num<66){
        comp='w';
    }
    if (num>=66){
        comp='g';
    }
    printf("Enter 's' for Snake,'w' for Water and 'g' for Gun\n");
    scanf("%c",&you);
    int result =SnakeWaterGun(you,comp);
    
    if(result==0){
        printf("Game Draw!\n");
    }
    else if(result==1){
        printf("Congratulations\n You Win!\n");
    }
    else{
        printf("You Loose!\n Better luck next time\n ");
    }
    printf("you choose %c and computer choose %c\n",you,comp);
    return 0;
}