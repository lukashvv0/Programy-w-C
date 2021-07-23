#include <stdio.h>
#include <stdlib.h>
#include <time.h>
void generuj(short tab[], int n, short lim);
int ileDodatnich(const short tab[], int n);
int ileUjemnych(const short tab[], int n);
int ileZerowych(const short tab[], int n);
short sumaDodatnich(const short tab[], int n);
short sumaUjemnych(const short tab[], int n);
int dlugoscMaksymalnegoCiaguDodatnich(const short tab[], int n);
int main(void)
{
const int N = 1000;
short tab[N];
printf("Podaj liczbę elementów: ");
int n;
scanf("%d", &n);
if (n <= 0 || n > N) {
printf("Liczba elementów musi być z przedziału [1, %d\n]!", N);
return 1;
}
generuj(tab, n, 100);
printf("Ujemne elementy:");
ileUjemnych(tab,n);
printf("\n");
printf("Dodatnie elementy:");
ileDodatnich(tab,n);
printf("\n");
printf("Zerowe elementy:");
ileZerowych(tab,n);
printf("\n");
printf("Suma dodatnich elementów:");
sumaDodatnich(tab,n);
printf("\n");
printf("Suma ujemnych elementów: ");
sumaUjemnych(tab,n);
printf("\n");
return 0;
}

void generuj(short tab[], int n, short lim)
{
srand(time(0));
for (int j = 0; j < n; ++j)
tab[j] = rand() % lim + 1;

for (int i=0;i<n;i++)
printf("%d,",tab[i]);
}
int ileDodatnich(short tab[],int n)
{	int sum=0;
	for (int i=0;i<n;i++){
		if (tab[i]>0)
			sum++;}
	return sum;
	
	}
int ileUjemnych(short tab[],int n)
{	int sum=0;
	for (int i = 0;i<n;i++){
		if (tab[i]<0)
			sum++;}
	return sum;
	
	}
int ileZerowych(short tab[],int n)
{	int sum=0;
	for (int i=0;i<n;i++){
		if (tab[i]=0)
			sum++;}
	return sum;
	
	}
short ileDodatnich(short tab[],int n)
{
	int sum=0;
	for (int i = 0;i<n;i++){
		if (tab[i]>0)
			sum+=tab[i];}
	return sum;
	
	}
short ileUjemnych(short tab[],int n)
{
	int sum=0;
	for (int i=0;i<n;i++){
		if (tab[i]<0)
			sum+=tab[i];}
	return sum;
	
	}

int dlugoscMaksymalnegoCiaguDodatnich(const short tab[], int n);
{	
	int max=0,sum=0;
	for (int i=0;i<n;i++){
		if (tab[i]>0)
			sum++
		else if (tab[i]<0){
			max=sum;
			sum=0;}
	return max;
	
	}
