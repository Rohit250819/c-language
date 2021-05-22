# include<stdio.h>
# include<string.h>

int main(){
    char *source="Me ";
    char target[30];
    strcpy(target,source);
    printf("My hero is %s",target);
    return 0;
}