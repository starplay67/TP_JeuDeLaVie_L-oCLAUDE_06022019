#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "prototypes.h"
#define TAILLE1 21
#define TAILLE2  23

//prototypes
void init_tab(int tMonTab [][TAILLE2 ]);
int nb_adjacent(int tMonTab [][TAILLE2 ],int nX, int nY);
void prochainTour(int tMonTab[][TAILLE2 ]);
void aff_tab(int tMonTab [][TAILLE2 ]);
void row(int width);

int main( ) {
   int i;
   srand(time(NULL));
   int nb_tours;
   int tMonTab[TAILLE2] [TAILLE2 ];
   char s[2];
   printf("Nombre de tours : ");
   scanf("%i",&nb_tours);
   init_tab(tMonTab);
   printf("Generation 1 :\n");
   aff_tab(tMonTab);
   printf("Appuyer sur ENTRER pour continuer\n");
   gets(s);
   for(i=0; i<nb_tours; i++) {
      prochainTour(tMonTab);
      system("cls");
      printf("Tour %d \n", i+1);
      aff_tab (tMonTab);
      printf("Appuyer sur ENTRER pour continuer\n");
      gets(s);
   }
   return 0;
}

