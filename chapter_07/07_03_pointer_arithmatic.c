# include<stdio.h>

int main(){
    float i=32;
    float j=67.2;
    float*ptr=&i;
    float*ptr2=&j;
    printf("The value of ptr is %d\n",ptr);
    // ptr++;
    // ptr--;
    // ptr=ptr+1;
    // ptr=ptr-1;
    printf("The value of ptr is %d\n",ptr2);
    float subtract =ptr-ptr2;
    printf("Subtraction of two pointers is %f",subtract);
    return 0;
}