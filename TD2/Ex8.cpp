#include<iostream>
using namespace std;
class complexe{
	private:
		int reel;
		int img;
	public:
		complexe( int reel , int img){
			this->reel=reel;
			this->img=img;
		}
		
    	int operator==(complexe a ){
		 return (reel == a.reel) && (img == a.img);
		}
    	complexe operator+(complexe a ){
		 int Nvreel=reel+a.reel;
		 int Nvimg=img+a.img;
		}
	    complexe operator-(complexe a ){
		 int Nvreel=reel-a.reel;
		 int Nvimg=img-a.img;
		}
    	complexe operator*(complexe a ){
		 int Nvreel=reel*a.reel;
		 int Nvimg=img*a.img;
		}
	    complexe operator/(complexe a ){
		 int Nvreel=reel/a.reel;
		 int Nvimg=img/a.img;
		}
		
};
int main(){
   int x, y , k , j;
   cout<<" entre le premier nombre reel :" << x << endl;
   cin>>x;
   cout<<" entre le premier nombre img :" << y << endl;
   cin>>y;
   cout<<" entre la deuxieme nombre reel :" << k << endl;
   cin>>x;
   cout<<" entre la deuxieme nombre img :" << j << endl;
   cin>>y;
   complexe C1( x , y);
   complexe C2( k , j);
   if(C1 == C2){
   	 cout<< "c1 est egal a c2" << endl;
   }else{
   	 cout<< "c1 n'est pas egal a c2" << endl;
   }
    int choix;
    //resultet return de type complexe
    complexe resultat
    cout << "Menu :" <<endl;
    cout << "1. Addition"<<endl;
    cout << "2. Soustraction"<<endl;
    cout << "3. Multiplication"<<endl;
    cout << "4. Division"<<endl;
    cin >> choix; 
     switch (choix) {
        case 1:
            resultat=C1.addition(C2);
            break;
        case 2:
            resultat=C1.soustraction(C2);
            break;
        case 3:
            resultat=C1.multiplication(C2);
            break;
        case 4:
            resultat=C1.division(C2);
            break;
        default:
            cout << "Choix invalide" <<endl;
	return 0;

}
