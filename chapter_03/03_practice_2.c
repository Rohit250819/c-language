# include<stdio.h>

int main(){
    int physics,chemistry,maths;
    float total;
    
    printf("Enter you marks in physics\n");
    scanf("%d",&physics);
    printf("Enter you marks in chemistry\n");
    scanf("%d",&chemistry);
    printf("Enter you marks in maths\n");
    scanf("%d",&maths);
    total = (physics + chemistry + maths) / 3;
    if(total<40 || physics<33||chemistry<33||maths<33){
    printf("Sorry your marks is too low, You are fail and your percentage is %d ",(int)total);
    }
    else {
        printf("Your marks are enough to pass, congratulations your percentage %f",total);
    }
    return 0;
}