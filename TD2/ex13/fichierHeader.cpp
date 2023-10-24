#include "point.h"
#include <iostream>

Point::Point(float xCoord, float yCoord) {
    x = xCoord;
    y = yCoord;
}

void Point::deplace(float dx, float dy) {
    x += dx;
    y += dy;
}

void Point::affiche() {
    std::cout << "Coordonnées du point : (" << x << ", " << y << ")" << std::endl;
}
