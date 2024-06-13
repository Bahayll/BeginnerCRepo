#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()
{
    int side;
    float area,a_4;
     a_4= sqrt(3)/4;
    printf("\nEnter the Length of Side: ");
    scanf("%d ", &side);
    area= a_4 * side * side ;
    printf("\nArea of Equilateral Triangle : %f", area);
    return 0;
}
