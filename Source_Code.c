/*Problem: Given as input the radius (line AC) of a cirele and
the height (line BC) as a measure of the distance from the
cirele center (point C) perpendicular to a chord (line passing
through A and B), calculate the measure of the central angle
(ACB), the length of the are created by extending line BC to
intersect with the circle, and the sector area. Use Central Angle Formula and convert central angle into degrees with 180/pi */

#include <stdio.h>          
#include <math.h>                     
#define PI 3.141



int main(void)           
{ 
float radius, CA, degrees, sector, height, arc;


printf("Enter the length of the Radius ->    ");
scanf("%f", &radius);


printf("Enter the length of the Height ->    ");
scanf("%f", &height);
getchar();


printf("\n");
printf("-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=\n");

printf("Radius --  %.2f   ", radius);
printf("Height --  %.2f   \n", height);
printf("-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=\n");


                     CA = (acos(height/radius));
printf("Measure of central angle: %6.2f\n", CA);



       sector = (CA / 2) * pow(radius, 2);
printf("Area of sector: %6.2f\n", sector);

                  arc = (CA * height);
printf("Length of arc: %6.2f\n", arc);
int ch;
while( (ch = getchar() ) != EOF && ch != '\n' ){;}
getchar();
return 0;

}

