# include<stdio.h>

int main(){
     int rating;
     printf("Enter your rating\n");
     scanf("%d",&rating);
      switch(rating){
          case 1:
          printf("You give one star rating\n");
          break;

          case 2:
          printf("You give two star rating\n");
          break;

          case 3:

          printf("You give three star rating\n");
          break;

          case 4:

          printf("You give four star rating\n");
          break;

          case 5:

          printf("You give five star rating\n");
          break;

          default :

          printf("invalid rating\n");

    




          
      }
    return 0;
}