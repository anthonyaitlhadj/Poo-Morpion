//
// Created by aaitlhadj on 02/02/2016.
//

#include "Joueur.h"
#include <iostream>
using namespace std;

void Joueur::prenom() {
    cout << "Entrer le prenom du premier joueur :" << endl;
    cin >> prenom1;
    cout << "Entrer le prenom du deuxième joueur :" << endl;
    cin >> prenom2;
    cout << "Joueur 1: " << prenom1 << " et Joueur 2: " << prenom2 << endl;
}

bool Joueur::choix() {
    string lettre1 = "B";
    string lettre2 = "S";
    cout << "Tapper en Majuscule B ou S :" << endl;
    cin >> valeur;
    if (valeur != lettre1 && valeur != lettre2) {
        cout << "Erreur!" << endl;
        cout << "Tapper en Majuscule B ou S :" << endl;
        cin >> valeur;
    }

    if (valeur == "B" ) {
        cout << prenom1 << " a choisi le caractere : " << valeur << endl;
        cout << prenom2 << " aura le caractere : " << lettre2 << endl;
    }
    else if (valeur == "S") {
        cout << prenom1 << " a choisi le caractere : " << valeur << endl;
        cout << prenom2 << " aura le caractere : " << lettre1 << endl;
    }

}