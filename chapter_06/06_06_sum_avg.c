# include<stdio.h>
void sumAndavg(int a,int b,int * sum,float * avg){
    *sum=a+b;
    *avg=(float)(*sum)/2;
}

int main(){
    int q=4;
    int w=7;
    int sum;
    float avg;
    sumAndavg(q,w,&sum,&avg);
    printf("The value of sum is %d\n",sum);
    printf("The value of avg is %f\n",avg);
    return 0;
}