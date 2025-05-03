#ifndef BADLAND_ROBIN_H
#define BADLAND_ROBIN_H
#define MAX_PSEUDO 20

#include <allegro.h>
void initialisation_allegro();
void afficher_ecran_jouer();
void demander_pseudo(char *pseudo);
int pseudo_existe(const char *pseudo);
void menu_principal();


#endif //BADLAND_ROBIN_H