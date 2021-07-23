#include <stdio.h>
#include <stdlib.h>

void collatz(short tab[], int n);
void zmien(short tab[], int n);
void odwroc(short tab[], int lewy, int prawy);
void signum(short tab[], int n);
int main(void) {
  const short n = 10;
  short* tab = malloc(n*sizeof(int));
  for(int i=0;i<10;++i)
    tab[i]=i; //(i%2)?i:-i;
  for(int i=0;i<10;++i)
    printf("%d%c", tab[i], i<9?' ': '\n');
  collatz(tab,10);
  for(int i=0;i<10;++i)
    printf("%d%c", tab[i], i<9?' ': '\n');
  zmien(tab,10);
  for(int i=0;i<10;++i)
    printf("%d%c", tab[i], i<9?' ': '\n');
  odwroc(tab,1,8);
  for(int i=0;i<10;++i)
    printf("%d%c", tab[i], i<9?' ': '\n');
  free(tab);
  return 0;
}

void odwroc(short tab[], int lewy, int prawy)
  {
    for(; lewy<prawy;lewy++,prawy--)
    {
      short pom=tab[prawy];
      tab[prawy]=tab[lewy];
      tab[lewy]=pom;
    }
    
  }

void zmien(short tab[], int n){
  for (int i=0;i<n;i++)
   if (tab[i] % 2 !=0)
     tab[i]=tab[i]*2;
   else if (tab[i] % 2 ==0)
          tab[i]=-tab[i];

}

void collatz(short tab[], int n)
{
 for (int i=0;i<n;i++)
 if (tab[i] %2!=0 && tab[i]>0) 
 tab[i]=(tab[i]*3)+1;
 else if (tab[i] % 2 == 0 && tab[i]>0){
 int max=1;
 for (int j=1;j<=tab[i];j+=2)
 if (tab[i] % j == 0)
 max=j;
 tab[i]=max;
 }
 void signum(short tab[],int n)
 {
	 for (int i=0;i<n;i++)
	 if (tab[i] < 0)
	 tab[i]=-1;
	 else if (tab[i] > 0)
	 tab[i]=1;
}
}
