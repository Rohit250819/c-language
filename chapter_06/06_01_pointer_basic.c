# include<stdio.h>

int main(){
    int i=35;
    int*j=&i;
    int**k=&j;
    printf("The value of i is %d\n",*j);
    printf("The value of adress of i is %u\n",j);
    printf("The value of adress of i is %u\n",&i);
    printf("The value of adress of j is %u\n",&j);
    printf("The value of j is %u\n",*(&j));
    printf("The value of adress of j is %u\n",k);
    printf("The value of  j is %u\n",*k);

    return 0;
}