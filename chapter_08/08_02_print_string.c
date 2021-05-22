# include<stdio.h>

int main(){
    // char str[]="Rohit";
    char str[]={'R','O','H','I','T','\0'};
    char *ptr=str;
    while(*ptr!='\0'){
        printf("%c",*ptr);
        ptr++;
    }
    return 0;
}