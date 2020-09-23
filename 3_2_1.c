#include <stdio.h>
#include <math.h>

float r = 0;
float d = 0;
float x = 0;
float p1, p2;

int main(void)
{

printf ("\nРадіус круга = ");
scanf ("%f", &r);

printf ("Довжина сторони квадрата = ");
scanf ("%f", &d);

p1 = M_PI*pow(r,2);
printf("\nПлощя круга = %f\n", p1);

p2 = d*d;
printf("Плошя квадрата = %f\n", p2);

if (p1 <= p2)
{
	printf("\nКруг поміститься в квадрат\n");
} else printf("\nКруг не поміститься в квадрат\n");
    return 0;
}