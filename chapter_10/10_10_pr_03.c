# include<stdio.h>

int main(){
    FILE*ptr1;
    FILE*ptr2;
    ptr1=fopen("first2.txt","r");
    ptr2=fopen("first1.txt","w");
     char c=fgetc(ptr1);
     while(c!=EOF){
         fputc(c,ptr2);
         fputc(c,ptr2);
         fputc(c,ptr2);
         c=fgetc(ptr1);
     }
     fclose(ptr1);
     fclose(ptr2);

    return 0;
}