#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "prototypes.h"
#define TAILLE1 21
#define TAILLE2  23


void init_tab(int tMonTab [][TAILLE2 ]) {
   int i,j;
   int nRandom=rand()%2;
   for(i=0; i<TAILLE2 ; i++) {
      for(j=0; j<TAILLE2 ; j++) {
         nRandom=rand()%2;
         if (nRandom==0)
            tMonTab[i][j]=1;
         else
            tMonTab[i][j]=0;
      }
   }
}

int nb_adjacent (int tMonTab[][TAILLE2 ],int nX, int nY)
{
   int nCpt=0;
   int i,j;
   for (i=nX-1;i<=nX+1;i++)
      for(j=nY-1;j<=nY+1;j++)
         nCpt=nCpt+tMonTab[i][j];
         nCpt -= tMonTab[nX][nY];
         return nCpt;
}

void prochainTour(int tMonTab[ ][TAILLE2 ])
{
   int i,j;
   int nbr_voisins;
   int tMonTab_densite[TAILLE1][TAILLE1];
   for(i=0; i< TAILLE1; i++)
         for(j=0; j< TAILLE1; j++)
            tMonTab_densite[i][j]=nb_adjacent(tMonTab,i+1,j+1);
   for(i=0; i< TAILLE1; i++)
      for(j=0; j< TAILLE1; j++) {
            nbr_voisins=tMonTab_densite[i][j];
            if(nbr_voisins==2)
                  tMonTab[i+1][j+1]=1;
            else if (nbr_voisins==0 || nbr_voisins==4)
                  tMonTab[i+1][j+1]=0;
   }
}

void aff_tab(int tMonTab[ ][TAILLE2 ])
{
   int i,j;
   for(i=1; i<=TAILLE1; i++) {
      row(7);
      for(j=1; j<= TAILLE1; j++)
         if (tMonTab[i][j]==1)
            printf("%c",'V');
         else
            printf("%c",'x');
      printf("\n");
   }
   row(TAILLE1);
}

void row(int width)
{
   int i;
   for(i=0; i<width; i++)
      printf("");
   //printf("\n");
}
