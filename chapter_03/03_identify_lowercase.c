# include<stdio.h>

int main(){
    char ch;
    printf("Enter the character\n");
    scanf("%c",&ch);
    //97-122 lowercase in ascii
    if(ch>=97 && ch<=122){
        printf("The character is in lower case\n");
    }
    else{
        printf("The charactere is not in lowercase\n");
    }
    return 0;
}