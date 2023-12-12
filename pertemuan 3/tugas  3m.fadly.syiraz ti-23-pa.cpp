#include <iostream>
using namespace std;
int main (){
	string nama;
	float a, b, c, h;
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
	
	if( h >=85 ) {
		cout<<"mendapatkan hadiah komputer i5" ;
	}
    else if (h >=70) {
    	cout<<"mendapatkan hadiah uang sebesar Rp. 2.500.000 " ;
	}
	else {
		cout<<"mendapatkan hadiah hiburan" ;
	}
	
	return 0;
	
}
