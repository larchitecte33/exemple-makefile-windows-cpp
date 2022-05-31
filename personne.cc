#include "personne.h"

#include<iostream>
#include<string>

using namespace std;

Personne::Personne(int id, string nom, string prenom) {
    this->id = id;
    this->nom = nom;
    this->prenom = prenom;
}

void Personne::direBonjour() {
    cout<<"Bonjour. Je m'appelle "<<nom<<" "<<prenom<<" et mon id est "<<id<<"."<<endl;
}