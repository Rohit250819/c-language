# include<stdio.h>
typedef struct compare{
    int hour;
    int minute;
    int second;
}time;
int timecmp(time t1,time t2){
    if(t1.hour>t2.hour){
        return 1;
    }
    if(t1.hour<t2.hour){
        return -1;
    }
    if(t1.minute>t2.minute){
        return 1;
    }
    if(t1.minute<t2.minute){
        return -1;
    }
    if(t1.second>t2.second){
        return 1;
    }
    if(t1.second<t2.second){
        return -1;
    }
    return 0;
}

int main(){
    time t1={11,07,57};
    time t2={13,02,56};
    int c=timecmp(t1,t2);
    printf("Time comparison function returns: %d",c);
    
    return 0;
}