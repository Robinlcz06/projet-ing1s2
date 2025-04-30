//
// Created by robin on 30/04/2025.
//

#ifndef MENU_H
#define MENU_H
//
// Created by robin on 27/04/2025.
//

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

#endif //MENU_H
