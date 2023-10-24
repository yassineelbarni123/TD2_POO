#include<iostream>
using namespace std;
class Personne{
	private:
		string nom;
		string prenom;
		int datenaissance;
	public:
		 Animal(string nom , 	string prenom ,  int datenaissance){
		 	this->nom = nom;
		 	this->prenom  = prenom ;
		 	this->datenaissance = datenaissance;
		 }
		 void setnom(string nom){
		 		this->nom = nom;
		 }
		 void setprenom(string prenom){
		 		this->prenom = prenom;
		 }
	    void set datenaissance(int  datenaissance){
		 		this-> datenaissance = datenaissance;
		 }
		string getnom(){
			return nom;
		}
		string getprenom(){
			return prenom;
		}
		int getdatenaissance(){
			return datenaissance;
		}	
		void display(){
			cout << " le nom est :" << nom << " prenom est : " << " date de naissance est :" << datenaissance << endl;
		}	
};
class Employe : public Personne{
	private:
		double Salaire;
	public:
		 Employe(string nom ,string prenom ,int datenaissance , double Salaire ):Personne(nom ,prenom ,datenaissance){
		 	this->Salaire=Salaire;
		 }
		void setSalaire(double Salaire){
		 	this->Salaire=Salaire;
		 }
		double getSalaire(){
			return Salaire;
		}
		void display(){
			Personne::display();
			cout << " Salaire est  :" << Salaire << endl;
		}	
		 
};
class Chef  : public Employe{
	private:
		string Service;
	public:
		 Chef(string nom ,string prenom ,int datenaissance , double Salaire  ,string Service):Employe(nom ,prenom ,datenaissance,Salaire ){
		 	this->Service=Service;
		 }
		void setService(string Service){
		 	this->Service=Service;
		 }
		string  getService(){
			return Service;
		}
		void display(){
			Employe::display();
			cout << " Service est  :" << Service << endl;
		}	
		 
};
class Directeur  : public  Chef{
	private:
		string Société;
	public:
		 Directeur(string nom ,string prenom ,int datenaissance , double Salaire  ,string Service , string Société):Chef(nom ,prenom ,datenaissance,Salaire,Service ){
		 	this->Société=Société;
		 }
		void setSociété(string Société){
		 	this->Société=Société;
		 }
		string  getSociété(){
			return Société;
		}
		void display(){
		    Chef::display();
			cout << " Société est  :" << Société << endl;
		}	
		 
};


