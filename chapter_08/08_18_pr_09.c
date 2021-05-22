# include<stdio.h>
void check(char st[],char c){
    char *ptr=st;
    while(*ptr!='\0'){
        if(*ptr==c){
            printf("Present\n");
        }
        
        ptr++;
    }
}

int main(){
    char st[]="hello i am Rohit Kumar";
    check(st,'i');

    
    return 0;
}