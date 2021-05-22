# include<stdio.h> 
void printtable(int*table,int num,int n){
    
    
    printf("The multiplication table of %d:\n",num);
    
    for(int i=0;i<n;i++){
        table[i]=num*(i+1);
    }
    for(int i=0;i<n;i++){
        printf("%d x %d = %d\n",num,i+1,table[i]);
    }
    printf("***********************************\n\n");
}

int main(){
    int multable[3][10];
    int m,n,o;
    printf("Enter the number of which multiplication table you want:\n");
    scanf("%d",&m);
    printf("Enter the number of which multiplication table you want:\n");
    scanf("%d",&n);
    printf("Enter the number of which multiplication table you want:\n");
    scanf("%d",&o);
    
    printtable(multable[0],m,10);
    printtable(multable[1],n,10);
    printtable(multable[2],o,10);
    
    return 0;
}