# include<stdio.h>
int occurence(char st[],char c){
    char*ptr=st;
    int count=0;
    while(*ptr!='\0'){
        if(*ptr==c){
            count++;
        }
        ptr++;
    }
    return count;
}

int main(){
    char st[]="chennai super kings";
    printf("The occurence of required character is %d",occurence(st,'i'));
    return 0;
}