# include<stdio.h>

int main(){
    FILE*ptr;
    int num;
    printf("Enter the number of which table you want:\n");
    scanf("%d",&num);

    ptr=fopen("table.txt","w");
    for(int i=0;i<10;i++){
        fprintf(ptr,"%d X %d = %d\n",num,i+1,num*(i+1));
    }
    fclose(ptr);
    printf("Sucessfully generated the table of %d\n",num);

    return 0;
}