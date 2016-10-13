#include <stdio.h>

int ikiilecarp(int a) {
	return a*2;
}

int main()
{
	int a = 0;
	int b = 0;

	printf("Lütfen bir sayı gir : \n");
	scanf("%d", &a);
	printf("Lütfen bir sayı daha gir : \n");
	scanf("%d", &b);
	printf("Girilen İki  sayı bunlar %d %d\n", a, b);
	printf("Girilen İlk Sayinin iki kati: %d\n", ikiilecarp(a));


	return 0;
}