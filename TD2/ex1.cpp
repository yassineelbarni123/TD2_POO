#include <iostream>
using namespace std;
void compteur() {
    static int compteur = 0; 
    compteur++; 
    cout << "appel numero " << compteur << endl;
}
int main() {
   int j;
   for(j=0 ; j<3; j++){
   	 compteur();
   }
   
    return 0;
}

