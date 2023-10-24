#include<iostream>
using namespace std;
void tribull(int tab[], int n) {
    int i, j, tmp;
    //tri croissante
    for (i = 0; i < n - 1; i++) {
        for (j = 0; j < n - 1 - i; j++) {
            if (tab[j] > tab[j + 1]) {
                tmp = tab[j];
                tab[j] = tab[j + 1];
                tab[j + 1] = tmp;
            }
        }
    }
}
int main(){
	int n ;
	cout<< " entre la taille de la table "<<endl;
	cin>>n;
	int tab[n];
	for(int i = 0 ; i <n ; i++ ){
		cout<<"Element " << i+1 << " : ";
		cin>>tab[i];
	}
	cout<<"-----------"<<endl;
	for(int i = 0 ; i <n ; i++ ){
	cout<<"les element du tablau est :"<< tab[i]<<endl;
	}
	cout<<"-----------"<<endl;
	tribull(tab,n);
	cout<<"-----------"<<endl;
	for(int i = 0 ; i <n ; i++ ){
	cout<<"les element du tablau est :"<< tab[i]<<endl;
	}
	return 0;

}
