#include <stdio.h>
#include <math.h>
int main(void)

{
int i=0,n;
float a,suma=1;
printf("Podaj n: ");
scanf("%d",&n);
printf("Podaj a: ");
scanf("%f",&a);
for (int i=0;i<n;i++)
suma*=a;
printf("%g\n",suma);
return 0;
}
