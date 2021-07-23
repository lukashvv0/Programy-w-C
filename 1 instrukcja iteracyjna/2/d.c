#include <stdio.h>

int main(void)	// znaleźć największą liczbę z ciągu fibbonaciego mniejszą od podanej
{
		int p,b,n=0,l; //poprzedni,bierzący,następny,liczba
	printf("Podaj liczbę naturalną : ");
	scanf("%d",&l);
	p=b=1;
	while (n<l)
	{	p=b;
		b=n;
		n=p+b;
	}
	printf("Największy wyraz ciągu fib mniejszy od podanej liczby to %d",b);
	return 0;
}
