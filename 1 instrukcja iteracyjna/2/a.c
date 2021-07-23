#include <stdio.h>

// Znaleźć wszystkie liczby mniejsze od n 
// wzajemnie pierwsze z liczbą n



int main(void)
	{
	int n,i=2,j,sum;
	
	printf("podaj n: \n");
	scanf("%d",&n);
	
	while (i<n)
		{i++;
		sum=1;
		j=2;
		while (j<i+1)
			{
				j++;
				if (i % j == 0 && n % j == 0)
					sum+=1;
			}
		if (sum ==1)
				printf("%d,",i);
		}
return 0;
}
