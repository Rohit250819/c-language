# include<stdio.h>
# include<string.h>

int main(){
    char st1[34]="hello";
    char*st2="   handsome";
    strcat(st1,st2);
    printf("%s",st1);
    return 0;
}