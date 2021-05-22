# include<stdio.h>
# include<string.h>

int main(){
    char  st1[35]="hello";
    char*st2="hello";
    printf("Now the value is %d\n",strcmp(st1,st2));
    return 0;
}