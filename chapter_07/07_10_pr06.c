# include<stdio.h>
void positiveinteger(int*arr,int n){
   int i;
   int j=1;
  for(i=0;i<n;i++){if(arr[i]>0){
      printf("It is positive integer no. %d\n",j++);
  }
  
  }
}
int main(){
    int arr[]={1,2,0,-9,4,-9,-2,4,8};
    positiveinteger(arr,8);
    return 0;
}