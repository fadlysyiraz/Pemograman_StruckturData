#include <iostream>
using namespace std;
int main()
{
	int n;
	cout<<"Masukan Panjang Pola: ";
	cin>>n;

//Kiri Atas
	for(int i=1; i<=n; i++){
		for(int j=n; j>=i; j--){
			cout<<" 1";
		}
		cout<<endl;
	}


//Kanan Atas
	for(int i=1; i<=n; i++){
		for(int j=1; j<i; j++){
			cout<<"  ";
		}
		for(int h=n; h>=i; h--){
			cout<<" 2";
		}
		cout<<endl;
	}
	
	return 0;
}
