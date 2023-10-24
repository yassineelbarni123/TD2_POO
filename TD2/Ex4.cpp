#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> vec;
    int n;
    
    cout << "Entrer la taille de la table :" << endl;
    cin >> n;
    
    cout << "Entrer les elements de la table :" << endl;
    for (int i = 0; i < n; i++) {
        int element;
        cout << "Element " << i + 1 << " : ";
        cin >> element;
        vec.push_back(element);
    }
    
    cout << "Afficher les elements de la table dynamique :" << endl;
    for (int i=0 ; i< n ; i++) {
        cout << "Les elements de la table dynamique sont : " << vec[i] << endl;
    }
    cout << "--------------------" << endl;
    
    vector<int> vec1(vec.begin() , vec.end()); // le copie des element de la premier table en deuxieme table 
    
    for (int i=0 ; i< n; i++) {
        cout << "Les elements de la table2 dynamique sont : " << vec1[i] << endl;
    }
  
    cout << "la multiplication des elements des deux tables est  :" << endl;
    for (int i = 0; i < n; i++) {
        cout << "Resultat " << i + 1 << " : " << vec1[i] * vec1[i] << endl;
    }
    cout<<"-----------------------------"<<endl;
    vec.clear();
    for (int i=0 ; i< n; i++) {
        cout << "Les elements de la table2 dynamique sont : " << vec1[i] << endl;
    }
    vec1.clear();;
    
    return 0;
}



