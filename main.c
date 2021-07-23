/*
Zad.2 Napisz program, który tworzy tablicę 5 struktur Dane o polach: całkowitym a oraz
znakowym znak. Wypełnia pola tych struktur wartościami losowymi: liczba całkowita z przedziału <0,50> oraz znak spośród małych liter alfabetu.
Następnie zapisuje te struktury w osobnych wierszach do pliku dane1.txt. 
Kopiuje z pliku dane1.txt do pliku wynik1.txt tylko te struktury,
których pole znakowe jest samogłoską. Rozszerz obsługę błędów tak, aby uwzględnić przypadek,
gdy nie udaje się otworzyć plików.
*/

#include<stdio.h>
#include<stdlib.h>
#include<ctype.h>
#include<time.h>

typedef struct Dane{
  int a;
  char znak;
} Dane;

int main()
{
  
  Dane tab[5];
  srand(time(0));
  for (int i=0;i<5;i++)
  {
    tab[i].a=rand()%(50-0+1);
    tab[i].znak=rand()%(121-97+1)+97;
  }
  
  FILE *f,*f1;
  if((f=fopen("dane1.txt","w"))==NULL){
    printf("nie udalo sie otwrzyc pliku");
    return 1;
  }
  for (int i=0;i<5;i++)
  {
    fwrite(tab+i, sizeof(Dane),1,f);
  }
  
  fclose(f);

  if((f=fopen("dane1.txt","r"))==NULL)
    {
    printf("nie udalo sie otwrzyc pliku");
    return 1;
    }

  if((f1=fopen("wynik1.txt","w"))==NULL)
    {
    printf("nie udalo sie otwrzyc pliku");
    return 1;
    }
  Dane d;
  while(1)
  {
    int ile = fread(&d, sizeof(Dane),1,f);
    if (ile==1)
    {
      if(d.znak=='a'||d.znak=='o'||d.znak=='e'||d.znak=='y'||d.znak=='u'||d.znak=='i')
        fwrite(&d, sizeof(Dane),1,f1);
    }
    else
      break;
  }
  /* printowanie zawartości struktury */
  for (int i=0;i<5;i++)
  {
  printf("%d,",tab[i].a);
  printf("%c",tab[i].znak);
  printf("\n");
  }
 
  fclose(f);
  fclose(f1);
}