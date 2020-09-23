#include <stdio.h>
#include <math.h>
int main()
{
int a,c,b;
float y=0;
printf("введіть точку a=");
scanf("%d",&a);
printf("введіть точку b=");
scanf("%d",&b);
printf("введіть точку c=");
scanf("%d",&c);

if(c>0)
{
	if (b-a <= 0)
	{
		printf("Під коренем відємне число\n");
		return 1;
	}
y = sqrt(b-a)+2*(sqrt(c));
printf("%f виконується перша умова", y);
 }

 if(c==0)
{
	if (6*a-c == 0)
	{
	printf("Виконується ділення на 0\n");
	return 1;
	}
y =  6*a-c/b;
printf("%f виконується друга умова", y);
}

  if  (c<0)
{
     y = b+12*pow(c,3);
     printf("%f виконується третя умова", y);
}
    return 0;
}