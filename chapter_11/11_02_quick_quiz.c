# include<stdio.h>
# include<stdlib.h>

int main(){
    float* ptr;
    ptr=(float*)malloc(4*sizeof(float));
    for(int i=0;i<4;i++){
        printf("Enter the value of element %d\n",i+1);
        scanf("%f",&ptr[i]);
    }
    for(int i =0;i<4;i++){
        printf("The value of element %d is %.2f\n",i+1,ptr[i]);
    }
    return 0;
}