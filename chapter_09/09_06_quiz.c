# include<stdio.h>
# include<string.h>
typedef struct employee{
 int code;
 float salary;
 char name[20];
}new;
void showfunction(new e1){
    printf("%d \n%.2f \n%s\n",e1.code,e1.salary,e1.name);
}


int main(){
    new e1;
    
  
    e1.code=101;
    e1.salary=45.3;
    strcpy(e1.name,"Rohit");
   
    showfunction(e1);
    
    return 0;
}