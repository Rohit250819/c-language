# include<stdio.h>
void display();//function prototype
int main(){
    int a;
    printf("Initializing display\n");
    display();//Function call
    printf("Display function function finished its work\n");

    
    return 0;
}//Function call
void display(){
    printf("This is a display\n");
}