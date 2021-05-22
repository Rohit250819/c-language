# include<stdio.h>
void swap(int *arr, int n){
    for(int i=0;i<9/2;i++){
        int temp;
        temp=arr[i];
        arr[i]=arr[n-1-i];
        arr[n-1-i]=temp;
    }
}

int main(){
    int arr[]={1,2,3,4,5,6,7,8,9};
    swap(arr,9);
    for(int i=0;i<9;i++){
        printf("The value of %d is %d\n",i+1,arr[i]);
    }
    return 0;
}