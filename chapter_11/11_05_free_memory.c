# include<stdio.h>
# include<stdlib.h>

int main(){
    int*ptr;
    int n;
    printf("Enter the no. of integers you want:\n");
    scanf("%d",&n);
    ptr=(int*)calloc(600,sizeof(int));
    // printf("The size of int: %d",sizeof(int));
    for(int i=0;i<n;i++){
        printf("Enter the value of element %d\n",i+1);
        scanf("%d",&ptr[i]);
        free(ptr);
    }
    for(int i=0;i<n;i++){
        printf("The value of element %d is %d\n",i+1,ptr[i]);
    }

    return 0;
}