//
// Created by aaitlhadj on 21/02/2016.
//

#include "Emplacement.h"
#include <iostream>
#include <iomanip>

using namespace std;

void Emplacement::initGrille() {
    cout << setfill('-') << setw(120) << "\n";
    cout << " " << setfill(' ') << setw(20) << grille[0][0] << setfill(' ') << setw(20) << "|" << " " << setfill(' ') << setw(20) << grille[0][1] << setfill(' ') << setw(20) << "|" << setfill(' ') << setw(20) << grille[0][2] << "\n";
    cout << setfill('-') << setw(120) << "\n";
    cout << " " << setfill(' ') << setw(20) << grille[1][0] << setfill(' ') << setw(20) << "|" << " " << setfill(' ') << setw(20) << grille[1][1] << setfill(' ') << setw(20) << "|" << setfill(' ') << setw(20) << grille[1][2]<< "\n";
    cout << setfill('-') << setw(120) << "\n";
    cout << " " << setfill(' ') << setw(20) << grille[2][0] << setfill(' ') << setw(20) << "|" << " " << setfill(' ') << setw(20) << grille[2][1] << setfill(' ') << setw(20) << "|" << setfill(' ') << setw(20) << grille[2][2] << "\n";
    cout << setfill('-') << setw(120) << "\n";
}

void Emplacement::jouerGrille() {

    if (turn == 'B'){
        cout << "Batman joue la case n° : ";
    }
    else if (turn == 'S'){
        cout << "Superman joue la case n° : ";
    }
    cin >> choix;

    switch (choix){
        case 1:
            ligne = 0;
            colone = 0;
            break;
        case 2:
            ligne = 0;
            colone = 1;
            break;
        case 3:
            ligne = 0;
            colone = 2;
            break;
        case 4:
            ligne = 1;
            colone = 0;
            break;
        case 5:
            ligne = 1;
            colone = 1;
            break;
        case 6:
            ligne = 1;
            colone = 2;
            break;
        case 7:
            ligne = 2;
            colone = 0;
            break;
        case 8:
            ligne = 2;
            colone = 1;
            break;
        case 9:
            ligne = 2;
            colone = 2;
            break;
        default:
            cout << "Rentré le bon numéro\n";
            jouerGrille();
    }

    // Si la case est vide alors on place le symbole puis on passe au tour de l'adversaire

    /*cout << (turn == 'B' && grille[ligne][colone] != 'B') ? "true" : "false";
    cout << "fin";*/

    if (turn == 'B' && grille[ligne][colone] != 'B' && grille[ligne][colone] != 'S')
    {
        grille[ligne][colone] = 'B';
        turn = 'S';
    }
    else if (turn == 'S' && grille[ligne][colone] != 'B' && grille[ligne][colone] != 'S')
    {
        grille[ligne][colone] = 'S';
        turn = 'B';
    }
    else
    {
        cout << "Mouvement impossible case déjà choisi \n";
        jouerGrille();
    }

    while (!isEnd())
    {
        initGrille();
        jouerGrille();
        isEnd();
    }

    if (turn == 'S' && !egalite)
    {
        initGrille();
        cout << endl << endl << "Batman a gagné la partie!! \n";
    }
    else if (turn == 'B' && !egalite)
    {
        initGrille();
        cout << endl << endl << "Superman a gagné la partie!! \n";
    }
    else
    {
        initGrille();
        cout << endl << endl << "C'est une égalité! \n";
    }
}

bool Emplacement::isEnd(){

    //verification victoire
    for (int i = 0; i < 3; i++)
    {
        if ((grille[i][0] == grille[i][1] && grille[i][1] == grille[i][2]) || (grille[0][i] == grille[1][i] && grille[1][i] == grille[2][i]) || (grille[0][0] == grille[1][1] && grille[1][1] == grille[2][2]) || (grille[0][2] == grille[1][1] && grille[1][1] == grille[2][0]))
        {
            return true;
        }
    }

    //verification egalite
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            if (grille[i][j] != 'B' && grille[i][j] != 'S')
            {
                return false;
            }
        }
    }
    egalite = true;
    return true;
}