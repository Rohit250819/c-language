# include<stdio.h>
void encrypt(char*c){
    char*ptr=c;
    while(*ptr!='\0'){
        *ptr=*ptr+1;
    ptr++;
    }
}

int main(){
    char c[]="Rohit who is your crush?";
    encrypt(c);
    printf("Encypted message:\n %s",c);
    return 0;
}