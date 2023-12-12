#include<iostream>
using namespace std;

int main(){
	const float phi = 3.14;
	float L, r , t;
	
	cout<<"Welcome Fadly"<<endl;
	
	cout<<"Menghitung Luas Lingkaran="<<endl;
	
	cout<<"Masukan Jari-Jari Lingkaran=";
	cin>>r;
	
	cout<<"Luas lingkaran dengan Jari-Jari "<<r<<"cm adalah="<<phi*r*r<<"cm2"<<endl;
	
	cout<<"Menghitung Volume tabung="<<endl;
	
	cout<<"Diketahui Jari-Jari lingkaran adalah"<<r<<"cm"<<endl;
	cout<<"Masukin tinggi tabung=";
	cin>>t;
	
	cout<<"Volume tabung dengan Jari-Jari"<<r<<"cm dan tinggi tabung"<<"cm adalah="<<phi*r*t<<"cm2"<<endl;
	
	return 0;
	
}



