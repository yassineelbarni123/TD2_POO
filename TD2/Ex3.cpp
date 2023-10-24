#include <iostream>
using namespace std;

int main() {
    int n ;
    cout<<"entree la taille d'une table" <<endl;
	cin>>n;
	int tab[n];
	cout<<"entrer les element du tableau" <<endl;
	for(int i=0 ; i<n ; i++){
	cin>>tab[i];	
	}
	for(int i=0 ; i<n ; i++){
	cout<<"les element du tableau est: " << tab[i] <<endl;	
	}
	
	int Max = tab[0];
	int Min = tab[0];
	
	    for(int i=0 ; i<n ; i++){
		  	if(Max<tab[i]){
		  		Max=tab[i];
			}else if(Min>tab[i]){
				Min=tab[i]; 	
			  }
        }
        cout<<"le maximun est : " << Max <<endl;	
        cout<<"les minimun est : " << Min <<endl;
    return 0;
}


