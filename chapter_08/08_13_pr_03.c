# include<stdio.h>
int len(char*st){
    char*ptr=st;
     int len=0;
     while(*ptr!='\0'){
         len++;
         ptr++;
     }
     return len;
}

int main(){
    char mj[]="Rohit";
    printf("The length of string is %d",len(mj));
    
    return 0;
}