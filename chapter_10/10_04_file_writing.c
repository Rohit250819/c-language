# include<stdio.h>

int main(){
    FILE*ptr;
    int num=67;
    ptr=fopen("first.txt","w");
    fprintf(ptr,"The value of num is %d\n",num);
    fprintf(ptr,"Now I am able to write files hello ");
    fclose(ptr);

    return 0;
}