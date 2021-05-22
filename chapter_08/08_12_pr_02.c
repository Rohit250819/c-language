# include<stdio.h>
#include<string.h>

int main(){
    char st1[35];
    char st2[35];
    char c;
    int i =0;
    printf("Enter the st1 input:\n");
    scanf("%s",st1);
    printf("Enter the value character by character:\n");
    while(c!='\n'){
        fflush(stdin);
        scanf("%c",&c);
        st2[i]=c;
        i++;

    }
    st2[i-1]='\0';
    printf("The value of st1 is %s\n",st1);
    printf("The value of st2 is %s\n",st2);
    printf("strcmp value of st1 and st1 is %d\n",strcmp(st1,st2));
    
    return 0;
}