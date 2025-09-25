//simple c program
/*
Name: Steve Collins Munene
Reg: CT100/G/26243/25
Description: calculation of a cylinder

*/

#include <stdio.h>
#include <math.h>
//main function
int main()
{
double radius,height,volume,surfaceArea;

    //prompt the user 
    printf("enter the radius:");
    scanf("%lf",&radius);

    printf("enter the height:");
    scanf("%lf",&height);

    //computer volume and surfaceArea
    volume=M_PI*pow(radius, 2)*height;
    surfaceArea=2*M_PI*pow(radius, 2)+2*22/7*radius*height;

    //display results of volume and surfaceArea
    printf("\n volume of the cylinder is %.2lf",volume);

    printf("\n surface Area of the cylinder is %.2lf",surfaceArea);

return 0;
}