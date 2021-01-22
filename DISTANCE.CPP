#include <stdio.h>
#include <math.h>
#include <conio.h>
int  main()
{
  int x1,x2,y1,y2;
  float distance=0.0;
  clrscr();
  printf("Enter the x and y coordinates of the first point and second point: ");
  scanf("%d %d %d %d", &x1,&x2,&y1,&y2);
  distance=sqrt(pow((x2-x1),2)+pow((y2-y1),2));
  printf("\n Distance =%f",distance);
  getch ();
  return 0;
}