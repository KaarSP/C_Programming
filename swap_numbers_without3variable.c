#include<stdio.h>
void main(){
    float n1, n2;
    printf("Enter 2 numbers: ");
    scanf("%f %f", &n1, &n2);
    printf("Numbers before Swapping: n1 = %.2f, n2 = %.2f\n",n1,n2);
    n1 = n1 + n2;
    n2 = n1 - n2;
    n1 = n1 - n2;
    printf(" Numbers after Swapping: n1 = %.2f, n2 = %.2f\n",n1,n2);
}