//
// Created by aaitlhadj on 02/02/2016.
//

#ifndef MORPION_JOUEUR_H
#define MORPION_JOUEUR_H

#include <string>
using namespace std;

class Joueur
{
    public:
        void prenom();
        bool choix();

    private:
        string valeur;
        string prenom1;
        string prenom2;
};


#endif //MORPION_JOUEUR_H