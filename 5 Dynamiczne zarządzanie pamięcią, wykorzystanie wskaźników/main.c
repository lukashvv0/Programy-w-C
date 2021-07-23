#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>
/*Zdefiniuj funkcję F1() w wersji wskaźnikowej, która nic nie zwraca i do łańcucha wskazywanego przez pierwszy
argument przepisze, w kolejności występowania, co drugi znak z łańcucha przekazanego jako stały, drugi
argument funkcji o ile jest on małą literą alfabetu.
W funkcji main() zadeklaruj p jako wskaźnik do stałych znaków i zainicjalizuj go napisem
„Idzie rak idzie rak czasem naprzód czasem wspak. Idzie rak nieborak jak uszczypnie, będzie znak!” oraz
zadeklaruj q jako wskaźnik do znaków. Przydziel dynamicznie pamięć (malloc()) dla tablicy tylu znaków
(pamiętaj o znaku ‘\0’), aby pomieściła połowę znaków z łańcucha p o ile długość łańcucha jest liczbą parzystą, w
przeciwnym przypadku o jeden więcej znak niż połowa długości łańcucha p. Wartość zwracaną przez funkcję
malloc() przypisz do wskaźnika q. Sprawdź czy alokacja pamięci powiodła się. Jeżeli nie, wypisz na ekranie
odpowiedni komunikat i zakończ program zwracając 1. W przeciwnym przypadku, gdy pamięć została
prawidłowo przydzielona, wywołaj dla wskaźników p i q funkcję F1(). Następnie wypisz na ekranie w osobnych
liniach napisy wskazywane przez wskaźniki p i q.
_______________________________________________________

Zdefiniuj funkcję F2() w wersji wskaźnikowej, która utworzy dynamicznie (calloc()) nowy łańcuch wynik o takiej
długości, aby pomieścił wszystkie znaki z łańcucha s będącego stałym argumentem funkcji, a następnie wstawi je
do niego, w odwrotnej kolejności ich występowania i każdą małą literę alfabetu zamieni na dużą, a dużą na małą.
Funkcja ma zwrócić wskaźnik wskazujący początek nowo utworzonego łańcucha.
W funkcji main() zadeklaruj wskaźnik p do stałych znaków i zainicjalizuj go napisem:

„Policzymy, co sie ma:\
mam 2 ręce, łokcie 2,\
2 kolanka, nogi 2\
– wszystko pięknie zgadza się.\
2 uszu, oczka 2,\
no i buzię też się ma.\
A ponieważ buzia je,\
chciałbym buzie też mieć 2!”

Następnie zadeklaruj wskaźnik q do znaków i umieść w nim adres zwracany przez funkcję F2() wywołaną dla p.
Wypisz na ekranie łańcuch wskazywany przez q.*/

void F1(char *q,const char*p);
char * F2(const char *s);
char *q;
int main(void) 
{
  const char * p="Idzie rak idzie rak czasem naprzód czasem wspak. Idzie rak nieborak jak uszczypnie, będzie znak!";
  int l=strlen(p);
  if (l%2==0)
    q=malloc(((l/2)+1)*sizeof(char));
  else
    q=malloc(((l/2)+2)*sizeof(char));
  if (q!=NULL)
  {
  F1(q,p);
  printf("p= %s\n",p);
  printf("q= %s\n",q);
  free(q);

   p="Policzymy, co sie ma:\
mam 2 ręce, łokcie 2,\
2 kolanka, nogi 2\
– wszystko pięknie zgadza się.\
2 uszu, oczka 2,\
no i buzię też się ma.\
A ponieważ buzia je,\
chciałbym buzie też mieć 2!";
  q=F2(p);
  printf("q=%s\n",q);
  free(q);
  }
  else
  {printf("Alokacja pamięci nie powiodła się!");
  return 1;
  }
}


void F1(char *q,const char*p)
{
char *pom=q;
const char *pom1=p;
int i=0;
for (;*p!='\0';++p)
  {i++;
if (i%2==0 && islower(*p))
  {*q=*p;
  q++;}
 }
*q='\0';
q=pom;
p=pom1;
}
char * F2(const char*s)
{
int b=strlen(s);
char *a=calloc(b,sizeof(char));
char * pom=a;
int size = strlen(s)-1;
s=s+size;
char f;
for (;size>=0;size--)
{if (islower(*s))
{
  *a=toupper(*s);
   a++;
  s--;
}
else if (isupper(*s))
{
  *a=tolower(*s);
   a++;
  s--;
}
else
  {*a=*s;
  a++;
  s--;
  }
}
*a='\0';
return pom;
}