#include <stdio.h>

// Znaleźć wszystkie podzielniki liczby n, ktore sa pierwsze



int main(void)
	{
	int n,i=2,j=2,sum;
	
	printf("podaj n: \n");
	scanf("%d",&n);
	
	while (i<=n)// <2,n>
		{i++;
		if ( n%i ==0) 
		{	
		// sprawdzamy czy i jest liczba pierwsza	
		sum=1;
		j=2;
		while (j<i+1)
			{j++;
				if (i % j == 0)
					sum+=1;
			}
		if (sum ==2)
				printf("%d,",i);
		}
	}
return 0;
}
