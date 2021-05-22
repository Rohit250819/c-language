# include<stdio.h>
void printarray(int ptr[], int n){
    for(int i=0;i<n;i++){
        printf("Value of element %d is %d\n",i+1,ptr[i]);
    }
    ptr[2]=555;
}


int main(){
    int array[]={1,2,3,4,5,6,7};
    printarray(array,7);
    printf("%d",array[2]);
    return 0;
}