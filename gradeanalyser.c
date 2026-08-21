#include <stdio.h>

int main(){

    float marks[5];
    float Total;
    float percentage;
   
    printf("Enter your physics marks :\n");
    scanf("%f", &marks[0] );

    printf("Enter your chemistry marks :\n");
    scanf("%f", &marks[1] );

    printf("Enter your english marks :\n");
    scanf("%f", &marks[2] );

    printf("Enter your maths marks :\n");
    scanf("%f", &marks[3] );

    printf("Enter your computer marks :\n");
    scanf("%f", &marks[3] );

    Total = marks[0] + marks[1] + marks[2] + marks[3] + marks[4];
     printf("Total : %f\n" , Total);

    percentage =  ((marks[0] + marks[1] + marks[2] + marks[3] + marks[4]) / 500 )* 100;
    printf("percentage : %f\n" , percentage); 




}