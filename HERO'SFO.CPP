#include <stdio.h>
#include <math.h>
#include <conio.h>
int main ()
{
  float a, b, c, area, S;
  clrscr ();
  printf("\n Enter the length of the three sides of the triangle: ");
  scanf("%f %f %f", &a, &b, &c);
  S=(a+b+c)/2;
  area= sqrt(S*(S-a)*(S-b)*(S-b));
  printf("\n Area = %f", area);
  getch ();
  return 0;

}