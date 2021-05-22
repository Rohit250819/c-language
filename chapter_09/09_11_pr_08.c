# include<stdio.h>
# include<string.h>
typedef struct bankaccount{
    int accountnumber;
    char name[20];
    int yearofopening;
}bank;

int main(){
    bank customer[5];
    customer[0].accountnumber= 73778892;
    strcpy(customer[0].name,"Rohit");
    customer[0].yearofopening=1995;
     

customer[1].accountnumber= 73778672;
    strcpy(customer[1].name,"Shyam");
    customer[1].yearofopening=1996;



    printf("customer 1 details \nacc.no.:%d\n name %s:\n year of opening :%d\n",customer[0].accountnumber,customer[0].name,customer[0].yearofopening);
    printf("customer 2 details \nacc.no.:%d\n name %s:\n year of opening :%d\n",customer[1].accountnumber,customer[1].name,customer[1].yearofopening);




    
    return 0;
}