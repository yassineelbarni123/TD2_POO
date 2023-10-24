#ifndef POINT_H
#define POINT_H

class Point {
private:
    float x;
    float y;

public:
    Point(float xCoord, float yCoord);  // Constructeur
    void deplace(float deltaX, float deltaY);  // Fonction pour effectuer une translation
    void affiche();  // Fonction pour afficher les coordonnées
};

#endif
