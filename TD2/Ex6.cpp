#include <iostream>
using namespace std; 

void incrementer(int *a){
	(*a)++;

}
void permuter(int *x, int *y) {
    int temp ;
	temp = *y;
    *y = *x;
    *x = temp;
}


int main(){
  int m=20;
  int n=30;
  incrementer(&m);
  cout<< " la valeur de m est :" << m  <<endl;
  permuter(&m , &n);
  cout<< " la valeur de m et n  est :" << m << " " << n <<endl;
  
return 0;
}
