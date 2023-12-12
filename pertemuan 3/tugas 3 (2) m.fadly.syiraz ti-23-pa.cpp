#include <iostream>
using namespace std;
int main () {
	string nama;
	int a, b, c, h;
	cout<<"nama siswa : ";
	cin>> nama ;
	cout<<"nilai pertandingan 1 :" ;
	cin>> a ;
	cout<<"nilai pertandingan 2 :" ;
	cin>> b ;
	cout<<"nilai pertandingan 3 :" ;
	cin>> c ;
	h = (a+b+c)/3 ;
	cout<<"nilai rata rata adalah :"<<h<<endl;
	
	switch (h) {
		case 80 ...100 :
			cout<<"mendapatkan hadiah komputer core i5";
			break ;
		case 70 < 84 :
			cout<<"mendapatkan hadiah uang sebesar Rp. 2.500.000 ";
		break ; 
		default :
			cout<<"mendapatkan hadiah hiburan";
	}
	
	return 0;
}


