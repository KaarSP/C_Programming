#include<stdio.h>
int main()
{
    float principleAmt, rate; // Principle amount and rate of interest
    int numYr; // Number of years
    float simpleInt;
    printf("Enter Principle Amount: ");
    scanf("%f",&principleAmt);
    printf("Enter Rate of interest: ");
    scanf("%f",&rate);
    printf("Enter number of years: ");
    scanf("%d",&numYr);
    simpleInt = (principleAmt * numYr * rate)/100;
    printf("Simple Interest: %.2f\n", simpleInt);
    return 0;
}