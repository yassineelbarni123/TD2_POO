#include <iostream>
using namespace std;
int main() {
    int n ;
    cout<<" entree la taille d'une table" <<endl;
	cin>>n;
	int tab[n];
	int *p=tab;
    cout<<" entree les element des tableu " <<endl;
	for(int i=0 ; i<n ; i++){
	cin>>*(p+i);
	}
	cout<<" element des tableu " <<endl;
	for(int i=0 ; i<n ; i++){
	cout<<"les element du tableau est: " <<*(p+i) <<endl;	
	}
	
	int Max = *p;
	int Min = *p;
	
	    for(int i=0 ; i<n ; i++){
		  	if(Max<*(p+i)){
		  		Max=*(p+i);
			}else if(Min>*(p+i)){
				Min=*(p+i); 	
			  }
        }
        cout<<"le maximun est : " << Max <<endl;	
        cout<<"les minimun est : " << Min <<endl;
    return 0;
}


