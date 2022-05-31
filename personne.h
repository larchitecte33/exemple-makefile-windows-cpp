#include<string>

using namespace std;

class Personne {
    private:
        int id;
        string nom;
        string prenom;

    public:
        Personne(int id, string nom, string prenom);
        void direBonjour();
};