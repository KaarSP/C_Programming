#include<stdio.h>
void main(){
    float base, height, area;
    printf("Enter base: ");
    scanf("%f",&base);
    printf("Enter height: ");
    scanf("%f",&height);
    area = 0.5 * base * height;
    printf("\nArea of a right-angle triangle with base %.2f and height %.2f is %.2f\n", base, height, area);
}