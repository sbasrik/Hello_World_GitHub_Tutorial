#include <stdio.h>

int ikiilecarp(int a) {
	return a*2;
}

int main()
{
	int a = 0;

	printf("Lütfen bir sayı gir : \n");
	scanf("%d", &a);
	printf("Girilen Sayinin iki kati: %d\n", ikiilecarp(a));


	return 0;
}