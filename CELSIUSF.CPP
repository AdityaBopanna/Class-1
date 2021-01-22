#include <stdio.h>
#include <conio.h>
int main ()
{
    float celsius, fahrenheit;
    clrscr();
    printf("Enter the temperature in Fahrenheit: ");
    scanf("%f",&fahrenheit);
    celsius=(0.56)*(fahrenheit-32);
    printf("%.2f Fahrenheit=%.2f Celsius",fahrenheit,celsius);
    getch ();
    return 0;
}