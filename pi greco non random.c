#include <stdio.h>
#include <math.h>


int main()
{
  double   n_punti=0,n_tot,i;
  double  y,x,raggio,risultato;
  double  precisione=1000;

  for(y=0;y<=1;y=y+(1/precisione))
  {
    for(x=0;x<=1;x=x+(1/precisione))
    {
    //  printf("y:%f,  x:%f\n",y,x);
      raggio=x*x+y*y;
      n_tot++;
      if(raggio<=1)
      {
        n_punti++;
      }
    }
  }
  risultato=(n_punti/n_tot)*4;
  printf("%f  %f\n",n_tot,n_punti );
  printf("Pi greco= %f",risultato);
  return 0;
}
