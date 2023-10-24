#include<iostream>
using namespace std;
class vecteur{
	private:
		int x;
		int y;
		int z;
	public:
		 vecteur(){
		 	this->x = 0;
		    this->y = 0;
		    this->z = 0;
		 }
		 vecteur(int x ,int y ,int z){
		 	this->x = x;
		    this->y = y;
		    this->z = z;
		 }
		 void setx(int x){
		 		this->x = x;
		 }
     	void sety(int y){
		 		this->y = y;
		 }
		void setz(int z){
		 		this->z = z;
		 }
	    int getx(){
	    	return x;
		}
		int gety(){
	    	return y;
		}
		int getz(){
	    	return z;
		}	
		void display(){
			cout << " la valeur de x :" << x << " la valeur de y : " << y << " la valeur de z :" << z << endl;
		}
		vecteur addition(vecteur a)  {
        return (x + a.x, y + a.y, z + a.z);
    }
		float produitscalaire(vecteur a)  {
        return (x * a.x + y * a.y + z * a.z);
    }
        bool coincide(vecteur a)  {
        return (x == a.x ) && (y == a.y ) && (z == a.z);
    }
        float norme() {
        return sqrt(x * x + y * y + z * z);
    }			
};
int main(){
	vecteur v( 10 , 11 , 12);
	v.display();
	vecteur v1( 3 , 5 , 6);
	v1.display();
	vecteur somme = v.addition(v1);
	somme.display();
}



