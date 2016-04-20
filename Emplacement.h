//
// Created by aaitlhadj on 21/02/2016.
//

#ifndef MORPION_EMPLACEMENT_H
#define MORPION_EMPLACEMENT_H

#include <string>

class Emplacement {

public:
    void initGrille();
    void jouerGrille();
    bool isEnd();

private:
    char turn = 'B';
    int choix;
    char grille[3][3] = {{'1', '2', '3'}, {'4', '5', '6'}, {'7', '8', '9'}};
    int ligne;
    int colone;
    bool egalite = false;
};


#endif //MORPION_EMPLACEMENT_H
