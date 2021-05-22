# include<stdio.h>
typedef struct complex{
    int real;
    int complex;
}comp;
void show(comp c){ 
    
    printf("The value of real part of number %d\n",c.real);
    printf("The value of complex part of number %d\n",c.complex);
    
    

}

int main(){
    comp val[4];
    for(int i=0;i<4;i++){
        printf("Enter the real value for %d num\n",i+1);
        scanf("%d",&val[i].real);
        printf("Enter the complex value for %d num\n",i+1);
        scanf("%d",&val[i].complex);

    }
    for(int i=0;i<4;i++){
        show(val[i]);
    }

    
    return 0;
}