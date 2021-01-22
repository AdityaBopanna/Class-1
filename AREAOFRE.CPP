#include <stdio.h>
#include <conio.h>

int main()
{
float l,b,area=0;
clrscr ();
printf("Enter length and breadth: ",&l,&b);
scanf("%f %f",&l,&b);
area=l*b;
printf("The area is %f", area);
getch ();
return 0;
}
