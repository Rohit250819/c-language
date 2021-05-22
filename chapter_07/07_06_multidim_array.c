# include<stdio.h>

int main(){
    int subjects=4;
    int students=3;
    int marks[3][4];
    for(int i=0;i<students;i++){
        for(int h=0;h<subjects;h++){
            printf("Enter the marks of student %d in subject %d\n",i+1,h+1);
            scanf("%d",&marks[i][h]);
        }
    }
     for(int i=0;i<students;i++){
        for(int h=0;h<subjects;h++){
            printf("The marks of student %d in subject %d : %d\n",i+1,h+1,marks[i][h]);
            
        }
    }

    return 0;
}