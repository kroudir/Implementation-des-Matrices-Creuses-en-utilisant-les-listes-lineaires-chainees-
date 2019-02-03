#include <stdio.h>
#include <stdlib.h>
#include "Header.h"


int main()
{

    system("mode con LINES=150 COLS=120"); //si on creer plusieur matrice on est beson d'espace pour les affichers
    Acceuil();
    switch(choixLangue(20,6))
    {
    case 1:
        ProgramFR();   //program principale avec affichage en francais
        break;
    case 2:
        ProgramEN();   //program principale avec affichage en Anglais
        break;

    }
    return 0;
}

