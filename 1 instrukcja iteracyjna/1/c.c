#include <stdio.h>
#include <math.h>
int main(void)

{
int i=0,n;
float a,suma=0;
printf("Podaj n: ");
scanf("%d",&n);
printf("Podaj a: ");
scanf("%f",&a);
for (int i=0;i<n;i++)
{
	if (a<0)
	a=a*(-1);
suma+=a;}

printf("%g\n",suma);
return 0;
}
