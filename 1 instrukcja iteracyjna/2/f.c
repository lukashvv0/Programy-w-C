#include <stdio.h>

// przedstawić liczbę n w taki sposób n=a^2+b^2+c2+d2


int main(void)
{
	int a,b,c,d,n, koniec = 1;
	printf("Podaj liczbę całokiwtą: \n");
	scanf("%d",&n);
	a=0;
	while(a <= n && koniec)
	{a++;
	b=0;
		while(b <= n && koniec)
		{b++;
		c=0;
			while(c <= n && koniec)
			{c++;
			d=0;
				while(d<=n && koniec)
				{d++;
					if (a*a + b*b + c*c + d*d == n)
					{
						printf("%d, %d, %d, %d\n", a,b,c,d);
						koniec = 0;
					}		
				}
			}
		}
	}
}		
