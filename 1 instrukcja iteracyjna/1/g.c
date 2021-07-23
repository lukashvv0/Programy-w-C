#include <stdio.h>
#include <math.h>
int main(void)

{
int i=0,n;
float a,suma=0,iloczyn=1;
printf("Podaj n: ");
scanf("%d",&n);
printf("Podaj a: ");
scanf("%f",&a);
for (int i=0;i<n;i++)
{
suma+=a;
iloczyn*=a;}

printf("wynik dodawania: %g\n",suma);
printf("wynik mnożenia: %g\n",iloczyn);
return 0;
}

