#include <stdio.h>

int valorecolonna(char s[],int pos)   //s è una copia dell'array s_riga

int main()
{
  int righe,colonne;
  int c_i,r_i;  //contatore per colonna e riga
  int pos;  //indica la posizione nella lettura dell'array s_riga
  printf("Inserisci numero di righe:\n");
  scanf("%d",&righe );
  printf("Inserisci numero di Colonne:\n");
  scanf("%d",&colonne );
  char s_riga[colonne*3]; //variabile  stringa per  l'inserimento delle righe
  int Matrice[righe][colonne];
  for(c_i=0;c_i<=colonne;c_i++)
  {
    printf("Inserire i valori della %d ° riga\n",c_i );

  }

}

int valorecolonna(char s[],int pos)
{
  int valore;
  bool condizione;

  while(condizione)
  {
    if(s[pos]!=" ")
    {
      valore=s[pos]-48;   //I numeri delle tabella  aschii partone da 48
      pos++;
      if(s[pos]!=" ")
      {
        condizione=false;
        valore=valore*10+s[pos];
        pos++;
      }
      else()
      condizione=false;
    }
    return valore,pos;
  }
}
