#include <stdio.h>
#include <stdlib.h>
#include <time.h>

//void generuj(short tab[], int n, short minWartosc, short maxWartosc)

int main(void)
{
	const int N = 1000;
	short tab[N];
	printf("Podaj liczbę elementów: ");
	int n,minWartosc,maxWartosc;
	scanf("%d",&n);
	
	if (n<=0 || n > N){
		printf("liczba musi być z przedziału [1, %d\n",N);
		return 1;
	}
	
	printf("Podaj minimalną wartość");
	scanf("%d",&minWartosc);		// nie wiem jak użyć minWartość żeby działało
	printf("Podaj maksymalną wartość");
	scanf("%d",&maxWartosc);
	srand(time(0));
	for (int i = 0;i<n;i++) {
		tab[i] = rand() % maxWartosc + 1;
	}
	for (int j = 0;j<n;j++){
		printf("%d,",tab[j]);}
	printf("\n");
	return 0;}
