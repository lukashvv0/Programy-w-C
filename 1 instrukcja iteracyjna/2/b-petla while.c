#include <stdio.h>
// znaleźć wszystkie liczby doskonałe mniejsze od n

int main(void)
{
	int n,i=1,j,sum;
	printf("Podaj liczbę całokiwtą: \n");
	scanf("%d",&n);
	sum=n;
	while (i<n)
	{	i++;
		sum = i;
		j=1;
		while (j<i)
		{	
			j++;
			if (i % j == 0)
				sum-=j;
		}
		if (sum == 0)
			printf("%d,",i);
	}	

}
