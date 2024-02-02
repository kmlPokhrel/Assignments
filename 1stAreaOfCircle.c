#include<stdio.h>
int main() {
float radius, area , pi = 3.14;
printf("Enter the radius of the circle");
scanf("%f",&radius);
area = pi *(radius * radius);
printf("Area of Circle is %5.2f having the radius %5.2f", area, radius );
return 0;
}