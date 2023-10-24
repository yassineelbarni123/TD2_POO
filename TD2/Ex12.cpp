#include <iostream>
using namespace std;

class compteur {
private:
    int a;
    static int compteur;

public:
    compteur(int a) {
        this->a = a;
        compteur++;
    }
    void seta(int a) {
        this->a = a;
    }
    int geta() {
        return a;
    }
    void display() {
        cout << "La valeur de a est : " << a << endl;
    }
};

int compteur::compteur = 0;

int main() {
    compteur cmt1(20); // Utilisez un nom différent pour chaque objet
    compteur cmt2(30); // Utilisez un nom différent pour chaque objet

    cout << "Le nombre total d'objets est : " << compteur::compteur << endl;

    return 0;
}






