# include<stdio.h>
float convert(int c);

int main(){
    int c;
    printf("Enter the temperature in celcius:\n");
    scanf("%d",&c);
    printf("The temperature is %.2f fahrenheit\n",convert (c));
    return 0;
}
float convert (int c){
    float result;
    result=(float)(1.8*c+32);
    return result;
}