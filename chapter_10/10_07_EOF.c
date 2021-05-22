# include<stdio.h>

int main(){
    FILE*ptr;
    ptr=fopen("first.txt","r");
    char c;
    while(1){
      c=fgetc(ptr);
      if(c==EOF){
          printf("Reached to the END");
          break;
      }
    }
    return 0;
}