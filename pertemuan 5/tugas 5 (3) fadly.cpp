#include <iostream>
using namespace std;

int main(){
	
	int I, II = 0, III = 0;
	
	for(I = 2; I <= 20; I++){
		if ( I % 2 == 0){
			cout<< I;
			II = II + I;
		}
		else{
			if ( I == 20){
			cout<< "";
			}
			else {
				cout<< " + ";
			}
		
		}
	}
	cout << " = " << II;
	
}
