  /*Scrivere un programma che legga in ingresso un array di interi positivi (l’inserimento termina
  con l’inserimento di un valore <= 0 e di dimensione massima 100) e ne inverte la posizione
  degli elementi.*/

#include <stdio.h>

int dim=100;    //massimo array
int main()
{
  int n[dim];
  int in[dim];  //array invertito
  int i=0,lun;
  printf("Inserire i valori\n");
  printf("Inserire  il 1 numero:\n", i);
  scanf("%d",&n[0]);
  for(i=1;i<dim&&n[i-1]>0;i++)
   {
    printf("Inserire  il %d numero:\n", (i+1));
    scanf("%d",&n[i]);
    if(i==(dim-1)){
      printf("Hai raggiunto il numero massimo di valori\n");
    }
  }

  if(n[i-1]==0){lun=i-1;}
  else{lun=i;}

  printf("lun=%d\n",lun );
  for(int y=lun-1;y>=0;y--)
  {
    in[lun-y-1]=n[y];
    printf("n[%d]=%d\n",(lun-y-1),in[lun-y-1]);
  }

  return 0;
}
