#include <stdio.h>

int main(){
    float first_number; 
    float second_number;
    char operators;
    float result;

    printf("enter first number :\n");
    scanf("%f", &first_number);
    
    printf("enter second number:\n");
    scanf("%f", &second_number);
    
     printf("enter operator:\n");
    scanf(" %c", &operators);

    if (operators =='+')
    {
        result = first_number + second_number ;
                printf("result: %f", result );

    }
    else if (operators =='*')
    {
        result = first_number * second_number ;
                printf("result: %f", result );

        
    }
     else if (operators =='-')
    {
        result = first_number - second_number ;
                printf("result: %f", result );

        
    }
    else if (operators =='/')
    {
        result = first_number / second_number ;
                printf("result: %f", result );
    }
   
    else{
        printf("invalid operator");
    }






}