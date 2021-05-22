# include<stdio.h>
void decrypt(char*c){
    char*ptr=c;
    while(*ptr!='\0'){
        *ptr=*ptr-1;
    ptr++;
    }
}

int main(){
    char c[]="Spiju!xip!jt!zpvs!dsvti@";
    decrypt(c);
    printf("decrypted message:\n %s",c);
    return 0;
}