#include <iostream>
#include <string>

int main() {
    std::string dateHeure = "010920091123"; 

    if (dateHeure.length() != 12) {
        std::cout << " La longueur doit être de 12 caractères." << std::endl;
        return 1;
    }


    std::string jour = dateHeure.substr(0, 2);
    std::string mois = dateHeure.substr(2, 2);
    std::string annee = dateHeure.substr(4, 4);
    std::string heure = dateHeure.substr(8, 2);
    std::string minute = dateHeure.substr(10, 2);

    // Affichage des champs extraits
    std::cout << "Jour : " << jour << std::endl;
    std::cout << "Mois : " << mois << std::endl;
    std::cout << "Année : " << annee << std::endl;
    std::cout << "Heure : " << heure << std::endl;
    std::cout << "Minute : " << minute << std::endl;

    return 0;
}
