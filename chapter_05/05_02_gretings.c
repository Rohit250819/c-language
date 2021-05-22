# include<stdio.h>
void Goodmorning();
void Goodafternoon();
void Goodnight();
int main(){
    Goodmorning();
   
    
    return 0;
}
void Goodmorning(){
    printf("Good Morning!\n");
    Goodafternoon();
}
void Goodafternoon(){
    printf("Good Afternoon!\n");
     Goodnight();
}
void Goodnight(){
    printf("Good Night!\n");
}