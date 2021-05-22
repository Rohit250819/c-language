# include<stdio.h>

int main(){
    int arr[10];
    int*ptr=arr;
    ptr=ptr+2;
    if(ptr==&arr[2]){
        printf("These pointing to the same location\n");
    }
    else{
        printf("These are not pointing to the same location");
    }
    return 0;
}