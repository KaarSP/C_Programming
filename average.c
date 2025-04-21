#include <stdio.h>
void main()
{
    double n1, n2, n3;
    printf("Enter three numbers for the average computation:\n");
    scanf("%lf %lf %lf",&n1, &n2, &n3);
    printf("Average: %.2lf\n", (n1+n2+n3)/3);
}