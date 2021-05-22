# include<stdio.h>
struct vector{
    int x;
    int y;
};

int main(){
   struct vector v1,v2;
   v1.x=23;
   v1.y=23;
   v2.x=54;
   v2.y=8;
   printf("The x dimension of v1 is %d\n",v1.x);
   printf("The y dimension of v1 is %d\n",v1.y);
   printf("The x dimension of v2 is %d\n",v2.x);
   printf("The y dimension of v2 is %d\n",v2.y);
    
    return 0;
}