#include <stdio.h>

char n = 0;

int main(void)
{

printf ("\nn = ");
scanf ("%d", &n);
printf ("\n");

	switch (n)
	{
		case 1: printf("Січень\n"); break;
		case 2: printf("Лютий\n"); break;
		case 3: printf("Березень\n"); break;
		case 4: printf("Квітень\n"); break;
		case 5: printf("Травень\n"); break;
		case 6: printf("Червень\n"); break;
		case 7: printf("Липень\n"); break;
		case 8: printf("Серпень\n"); break;
		case 9: printf("Вересень\n"); break;
		case 10: printf("Жовтень\n"); break;
		case 11: printf("Листопад\n"); break;
		case 12: printf("Грудень\n"); break;
		default: printf("Такого місяця нема\n");
	}

    return 0;
}