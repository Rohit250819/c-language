# include<stdio.h>
# include<string.h>
struct employee{
    int code;
    float salary;
    char name[25];
};

int main(){
    struct employee microsoft[20];
    microsoft[0].code=101;
    microsoft[0].salary=45.3;
    strcpy(microsoft[0].name,"Rickni");

     microsoft[1].code=102;
    microsoft[1].salary=55.3;
    strcpy(microsoft[1].name,"Rishab");

     microsoft[2].code=103;
    microsoft[2].salary=65.3;
    strcpy(microsoft[2].name,"Rimp");
    printf("Done");
    return 0;
}