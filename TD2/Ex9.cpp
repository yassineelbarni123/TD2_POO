#include<iostream>
using namespace std;
class Animal{
	private:
		string nom;
		int age;
	public:
		 Animal(string nom , int age){
		 	this->nom = nom;
		 	this->age = age;
		 }
		 void setnom(string nom){
		 		this->nom = nom;
		 }
		void setage(int age){
		 		this->age = age;
		 }
		string getnom(){
			return nom;
		}
		int getage(){
			return age;
		}	
		void display(){
			cout << " le nom est :" << nom << " l'age est : " << age << endl;
		}	
};
class Zebra : public Animal{
	private:
		string lieu ;
	public:
		 Zebra(	string nom , int age , string lieu):Animal( nom ,  age){
		 	this->lieu=lieu;
		 }
		void setlieu(string lieu){
		 	this->lieu=lieu;
		 }
		string getlieu(){
			return lieu;
		}
		void display(){
			 Animal::display();
			cout << " lieu est  :" << lieu << endl;
		}	
		 
};
class Dolphin : public Animal{
	private:
		string color;
	public:
		Dolphin(string nom , int age , string color):Animal( nom ,  age){
		 	this->color=color;
		 }
		void setcolor(string color){
		 	this->color=color;
		 }
		string getcolor(){
			return color;
		}
		void display(){
			 Animal::display();
		     cout << " color de dolphin est  :" << color << endl;
		}	
};
int main(){
    Zebra z("Cat" , 12 , "tanger");
    z.display();
    Dolphin D("dolphin1" , 13 , "bleu");
    D.display();
	return 0;

}
