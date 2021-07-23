#include <stdio.h>
int main(void)

{
int i=0,n;
float a,suma=0,iloczyn=1,minus=1;
printf("Podaj n: ");
scanf("%d",&n);
for (int i=1;i<=n;i++)
{printf("Podaj a: ");
scanf("%f",&a);
iloczyn*=i;
minus*=-1;
suma+=(a*minus)/iloczyn;
}
printf("%g\n",suma);
return 0;
}

