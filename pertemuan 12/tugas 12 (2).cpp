#include <iostream>
using namespace std;

struct mhs{
	char nama[20], matkul[15];
	int nim,sks;
};

int main(){
	int tetap[2],variabel[2],d;
	mhs bayar[2];
	
	cout<<"Berapa data yang ingin di masukan ? ";
	cin>>d;
	for(int i=0; i<d; i++){
		int ttp[2], var[2];
		//input data
		cout<<"\n\n---------------------------\n";
		cout<<"\nNama Mahasiswa\t\t= ";
		cin>>bayar[i].nama;
		cout<<"NIM Mahasiswa\t\t= ";
		cin>>bayar[i].nim;
		cout<<"Mata Kuliah Mahasiswa\t= ";
		cin>>bayar[i].matkul;
		cout<<"Jumlah SKS Mahasiswa\t= ";
		cin>>bayar[i].sks;
		
		if(bayar[i].sks == 0){
			tetap[i] = 250000;
			variabel[i] = bayar[i].sks*tetap[i];
		}else{
				tetap[i] = 300000;
				variabel[i] = bayar[i].sks*tetap[i];
			}
		}
			
	
	cout<<"\n\n-----------------------\n";
	cout<<"\tOutput";
	cout<<"\n-----------------------\n";
	
	for(int i=0; i<d; i++){
		//Output data
		cout<<"\nNama Mahasiswa\t\t= "<<bayar[i].nama<<endl;
		cout<<"NIM Mahasiswa\t\t= "<<bayar[i].nim<<endl;
		cout<<"Mata Kuliah Mahasiswa\t= "<<bayar[i].matkul<<endl;
		cout<<"Jumlah SKS Mahasiswa\t= "<<bayar[i].sks<<endl;
		cout<<"SPP Tetap\t\t= "<<tetap[i]<<endl;
		cout<<"SPP Variabel\t\t= "<<variabel[i]<<endl;	
	}
}
