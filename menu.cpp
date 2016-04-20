//
// Created by aaitlhadj on 29/03/2016.
//

#include <iostream>
#include "menu.h"
#include "Joueur.h"
#include "Emplacement.h"

using namespace std;

int menu::initMenu() {
    cout << "--------------------------------------------Menu:--------------------------------------------" << endl;
    cout << "Option 1- Info" << endl;
    cout << "Option 2- Jouer" << endl;
    cout << "Option 3- Quitter" << endl << endl;
    cout << "Choisir une option: " << endl;
    cin >> option;

    if (option == 1) {
        menu Info;
        Info.InfoMenu();
        cout << "Ce projet consiste a créer un morpion. Il est réalisé par Ilyan et Anthony" << endl << endl;
        cout << "Tout le monde connait Batman, ce personnage mythique qui sort la nuit pour combattre le crime. De même, que Superman qui représente l’espoir et se bat pour la justice. \n"
                        "Sauf que ces deux personnages se battent, certes pour la même cause, mais ont des personnalités et des méthodes très différentes. \n "
                        "En effet, Batman, lui, est une personne très violente qui utilise parfois des méthodes peu orthodoxe, qui peut entrainé à ce que des gens finissent à l’hôpital. \n "
                        "Superman travail pour le gouvernement, il se bat pour la justice.\n"
                        "Et c’est pourquoi leur confrontation est inévitable. Superman est envoyé par le gouvernement pour arrêter Batman avant qu’il ne blesse plus de personnes. \n "
                        "Mais, le problème dans tout ça est leur force, ils ne peuvent pas se battre, de peur de blesser des innocents. \n"
                        "Ils finissent alors par ce mettre d’accord et donc régler leur compte autour du jeu du Morpion.\n"
                        "\n"
                        "\tChoisissez votre camp !" << endl;
        menu Menu;
        Menu.initMenu();
    }

    if (option == 2) {
        menu Jouer;
        Jouer.JouerMenu();
        cout << "Initialisation des Joueurs: " << endl;
        Joueur Joueurs;
        Joueurs.prenom();

        cout << "Choix du heros: " << endl;
        Joueurs.choix();

        cout << "Initialisation du plateau de jeu: " << endl;
        Emplacement E;
        E.initGrille();
        E.jouerGrille();
    }

    if (option == 3) {
        return 0;
    }

    else if (option > 3) {
        cout << "Incorrect Number" << endl;
        return 0;
    }

}

void menu::InfoMenu(){
    cout << "--> Option 1- Info: " << endl;
}

void menu::JouerMenu(){
    cout << "Option 1- Info " << endl;
    cout << "--> Option 2- Jouer: " << endl << endl;
}