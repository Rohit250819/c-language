# include<stdio.h>

int main(){
    FILE*ptr;
    ptr=fopen("sample1.txt","r");
    int c=fgetc(ptr);
    ptr=fopen("sample1.txt","w");
    fputc(2*c,ptr);
    
   

    return 0;
}