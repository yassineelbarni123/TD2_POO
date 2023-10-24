#include <iostream>
using namespace std;
int function1(){
  int x;
  cout<< "donner un entier :"<<endl;
  cin>>x;
  if(x%3==0){
    cout<< x <<" il est multiple de 3" <<endl;
	}else{
	cout<< x <<" n'est pas multiple de 3" <<endl;
	}
	
}
int function2(){
  int y;
  cout<< " donner un entier :" <<endl;
  cin>>y;
    if(y%2==0){
	cout<< y <<" il est pair " <<endl;
   }else{
   	 cout<< y <<" n'est pas  pair" <<endl;	
	}
		
	if(y%3==0){
	cout<< y <<" il est multiple de 3" <<endl;
	}else{
	cout<< y <<" n'est pas multiple de 3" <<endl;	
	}
	
	if(y%6==0){
	cout<< y <<" il est divisible de 6" <<endl;	
	}else{
	cout<< y <<" n'est pas divisible de 6" <<endl;	
	}

}
int main() {
    function1();
    cout<<"-------------------------" <<endl;	
    function2();
    return 0;
}

