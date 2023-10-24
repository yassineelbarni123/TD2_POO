#include "point.h"

int main() {
   
    Point monPoint(2.0, 3.0);

  
    monPoint.affiche();

    monPoint.deplace(1.0, 2.0);

   
    monPoint.affiche();

    return 0;
}
