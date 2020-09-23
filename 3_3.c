#include <stdio.h>
#include <math.h>

int a = 0;
int y = 0;
int z = 0;
double x = 0;

int main(void)
{
  
printf("a = ");
scanf("%d", &a);

printf("y = ");
scanf("%d", &y);

printf("z = ");
scanf("%d", &z);

  if (pow(y,2)-(2*a) <= 0)
  {
   printf("Виконується логарифмування числа, меншого за нуль");
   return 1;
  }

x = a*sqrt(pow(y,2)-(2-a))+pow(cos(z),2);
printf("\nx = %f\n", x);

  return 0;
}