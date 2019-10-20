#include <stdio.h>
#include <stdlib.h>
#include <math.h>


int main()
{
  float
   n_punti=0,n_tot,i;
  float n_casuale_y,n_casuale_x,raggio,risultato;
  n_tot=1000000;
  int precisione=1000;

  for(i=0;i<n_tot;i++)
  {
    n_casuale_y=(rand()%precisione)/1000.0;

    n_casuale_x=(rand()%precisione)/1000.0;

    printf("y:%f,  x:%f\n",n_casuale_y,n_casuale_x);
    raggio=n_casuale_x*n_casuale_x+n_casuale_y*n_casuale_y;
    if(raggio<1)
    {
      n_punti++;
    }

  }
  risultato=(n_punti/n_tot)*4;
  printf("%f  %f\n",n_tot,n_punti );
  printf("Pi greco= %f",risultato);
  return 0;
}
