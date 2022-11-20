// circle.c: Calculat and print the area of a circle

// Preprocessor directive
#include <stdio.h>

// Function declaration
double circularArea(double radius);

// Function implementation
//
// The function circularArea() calculates the area of a circle
// Parameter: The radius of the circle
// Return value: The area of the circle
double circularArea(double radius)          // start function implementation
{
  const double pi = 3.1415926536;           // define pi as constant
  return pi * radius * radius;
}


int main()
{
  double area = 0.0;

  printf("%20s\n",
         "Areas of Circles");

  printf("%10s%10s\n"
         "--------------------\n",
         "Radius", "Circle");

  double radius = 1.0;
  area = circularArea(radius);
  printf("%10.1f%10.2f\n", radius, area);

  radius = 5.0;
  area = circularArea(radius);
  printf("%10.1f%10.2f\n", radius, area);
}
