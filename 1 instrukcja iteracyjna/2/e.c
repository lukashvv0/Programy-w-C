#include <stdio.h>

// znaleźć liczby naturalne a,b,c takie że n=a^2+b^2+c2


int main(void)
{
	int a=1,b,c,n, koniec = 1;
	printf("Podaj liczbę całokiwtą: \n");
	scanf("%d",&n);
	while(a <= n && koniec){
		a++;
		b=1;
		while(b <= n && koniec){
			b++;
			c=1;
			while(c <= n && koniec){
				c++;
				if (a*a + b*b + c*c == n)
					{
					printf("%d, %d, %d\n", a,b,c);
					koniec = 0;
				}		
			}
		}
	}
}		
