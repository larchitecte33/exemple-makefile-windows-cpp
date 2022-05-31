// Pour compiler : make
// Pour supprimer les .o : make clean

#include "personne.h"

#include<iostream>

using namespace std;

int main() {
    cout<<"Allo le monde"<<endl;

    Personne p = Personne(1, "Durant", "Alain");
    p.direBonjour();

    return EXIT_SUCCESS;
}