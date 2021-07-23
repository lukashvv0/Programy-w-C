#include <stdio.h>
#include <time.h>
#include <stdlib.h>


int main()
{
    const int N = 1000;
    // N = 234;
    int T[N]; // int T[N] = {0,1,2,3,3,9}; char tab[10] = {'a','c','d'};
    int n;
    printf("n=");
    scanf("%d", &n);
    if( n >=1 && n <=1000)
    {
        srand(time(0));
        for (int i=0; i<n; ++i){
            T[i] = rand()%100 - 50; //<-50,50>
            printf("%d ", T[i]);
        }
        printf("\n");

// a    
        for (int i=0; i<n; ++i){
            if (T[i] % 2 != 0 && T[i] > 0)
                T[i] = 3*T[i]+1;
            else if (T[i] % 2 == 0 && T[i] > 0){
                 int dzielnik = 1, max = dzielnik;
                 while(dzielnik < T[i]){
                    if(T[i] % dzielnik == 0)
                        max = dzielnik;  
                    dzielnik += 2;  
                 }
                 T[i] = max;
            }

        }
        for (int i=0; i<n; ++i){
            printf("%d ", T[i]);
        }
        printf("\n");

// b
        for (int i=0; i<n; ++i){
            if (T[i] % 2 != 0)
                T[i] = 2*T[i];
            else if (T[i] % 2 == 0){
                T[i] = -T[i];
            }

        }
        for (int i=0; i<n; ++i){
            printf("%d ", T[i]);
        }
        printf("\n");
         for (int i=0; i<n; ++i){
            if (T[i] > 0)
                T[i] = 1;
            else if (T[i] < 0){
                T[i] = -1;
            }

        }
        for (int i=0; i<n; ++i){
            printf("%d ", T[i]);
        }
        printf("\n");

// c
        int lewy, prawy;
        printf("lewy=");
        scanf("%d", &lewy);
        printf("prawy=");
        scanf("%d", &prawy);
        if( lewy >=0 && lewy <n && prawy >=0 && prawy <n)
        {
            for(; lewy < prawy; lewy++, --prawy)
            {
                int pom = T[lewy];
                T[lewy] = T[prawy];
                T[prawy] = pom;
            }
        }
        for (int i=0; i<n; ++i){
            printf("%d ", T[i]);
        }
        printf("\n");
        }
        else
            printf("niepoprawne dane");


// d

		int parzyste=0, nieparzyste=0;
	for (int i=0;i<n;i++)
		{if (T[i] % 2 ==0){
			parzyste++;}
		else		
			nieparzyste++;
		}
		printf("Parzyste: %d\nNieparzyste: %d\n",parzyste,nieparzyste);

// e
	
		int max,licznik=0;
	max=T[0];
	for (int i=0;i<n;i++)
		{if (T[i] > max)
			max=T[i];}
	for (int i=0;i<n;i++)
		if (T[i]==max)
			licznik++;
		printf("Największa liczba to: %d\nWystępuje ona w tablicy %d razy\n",max,licznik);


return 0;
}
