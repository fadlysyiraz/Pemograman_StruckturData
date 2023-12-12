#include <iostream>
using namespace std;

int main (){
	
	int q, w = 0, e = 0;
	
	for(q = 1; q <= 20; q++){
		if ( q % 2 == 1){
			cout<< q;
			w = w + q;
		}
		else{
			if (q == 19){
			cout<< "";
			}
			else {
				cout<< " + ";
			}
		
		}
	}
	cout << " = " << q;

	
}
