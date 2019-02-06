#ifndef PROTOTYPES_H_INCLUDED
#define PROTOTYPES_H_INCLUDED
#define TAILLE1 21
#define TAILLE2  23

extern void init_tab(int tMonTab [][TAILLE2 ]);
extern int nb_adjacent(int tMonTab [][TAILLE2 ],int nX, int nY);
extern void prochainTour(int tMonTab[][TAILLE2 ]);
extern void aff_tab(int tMonTab [][TAILLE2 ]);
extern void row(int width);

#endif // PROTOTYPES_H_INCLUDED
