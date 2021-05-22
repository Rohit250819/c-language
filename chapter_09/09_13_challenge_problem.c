# include<stdio.h>
typedef struct timestamp{
    int year;
    int month;
    int date;
    int hour;
    int minute;
    int second;

}comp;
int cmp(comp t1, comp t2){
    if(t1.year>t2.year){
        return 1;
    }
    if(t1.year<t2.year){
        return -1;
    }
    if(t1.month>t2.month){
        return 1;
    }
    if(t1.month<t2.month){
        return -1;
    }
    if(t1.date>t2.date){
        return 1;
    }
    if(t1.date<t2.date){
        return -1;
    }
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
        return -1;}
        return 0;
}

int main(){
    comp t1={2019,8,25,12,56,34};
    comp t2={2019,7,12,17,24,31};
    int c=cmp(t1,t2);
    printf("Timestamp comparison function returns:\n%d",c);

    
    return 0;
}