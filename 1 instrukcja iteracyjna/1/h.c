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
for (int i=1;i<=n;i++)
suma+=a*(pow(-1,i+1));
printf("%g\n",suma);
return 0;
}

