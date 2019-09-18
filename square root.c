#include<stdio.h>
#include<math.h>
int main()
{
    //"Declareing the double data type for the square root fuction
    double first , second , first_sqrt , second_sqrt ,sum_sqrt ;

    printf("Enter the first number:\n");
    scanf("%lf",&first);

    printf("Enter the second number:\n");
    scanf("%lf",&second );

    first_sqrt= sqrt(first);
    printf("The square root of the first fuction is %0.2f \n",first_sqrt);

    second_sqrt=sqrt(second);
    printf("The square root of the second function is %0.2f \n",second_sqrt);

    //now we want to display the sum of the two input numbers

    sum_sqrt=sqrt(first+second);
    printf("The sum of the square root of the two numbers %0.2f",sum_sqrt);

    return 0;

}
