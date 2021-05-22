# include<stdio.h>

int main(){
    FILE*ptr;
    ptr=fopen("first2.txt","w");
//     printf("The value of my character is %c\n",fgetc(ptr));
//     printf("The value of my character is %c\n",fgetc(ptr));
// printf("The value of my character is %c\n",fgetc(ptr));
//     printf("The value of my character is %c\n",fgetc(ptr));
// printf("The value of my character is %c\n",fgetc(ptr));
putc('h',ptr);
putc('e',ptr);
putc('l',ptr);
putc('l',ptr);
putc('o',ptr);
    return 0;
}