#include <stdio.h>
int main(void)
{
	printf("Podaj liczbę naturalną: ");
	int n; scanf("%d",&n);
	int s = 0, j = 1;
	for (int i=0; i<n; i++)
{
		s += j;
		j += + 1;
}
	printf("Suma liczb od 1 do %d", n);
	printf(" wynosi %d\n", s);
}
