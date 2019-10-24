#include <stdio.h>
#include <stdlib.h>
int random(int n);
int dadi(int m);

int main()
{
  int n_random=0;     //numero restituito dalla funzione
  int n=0;            //numero inserito
  printf("inserire N\n");
  scanf("%d",&n);
  n_random=random(n);
  printf("Verranno lanciati %d dadi.\n",n_random);
  printf("\n");
  dadi(n_random);
  return 0;
}

int random(int n)
{
  int numero_random=rand()%n;
  return numero_random;
}

int dadi(int m)
{
  for(int i=1;i<=m;i++)
  {
    int lancio=(rand()%5)+1;
    printf("%d° è: %d\n",i,lancio );
  }
  return 0;
}
