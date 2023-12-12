//#include <iostream>
//#include <string.h>
//using namespace std;
//int main(){
//	char kata[20];
//	float angka, a, b;
//	cout<<"Masukan Sembarang angka =";
//	cin>> kata;
//	angka = atoi(kata);
//	a = angka + 7;
//	coutr<<"Hasil Perubahan ditambah dengan 7 ="<<a;
//	getchar();
//}



//#include <iostream>
//#include <string.h>
//using namespace std;
//int main(){
//	char kata[20];
//	float angka, a;
//	cout<<"Masukan Sembarang Angka = ";
//	cin>>kata;
//	angka=atol(kata);
//	a=angka +8;
//	cout<<"Hasil Perubahan Ditambah Dengan 8 ="<<a;
//	getchar();
//}



//#include <iostream>
//#include <cctype>
//#include <cstring>
//using namespace std;
//int main()
//{
// char teks[20], teks_baru[20];
// cout << "Tuliskan kata dengan huruf kapital = ";
//cin >> teks;
// for (int i=0; i<strlen(teks); i++) {
// if(teks[i] >= 'a' && teks[i] <= 'z'){
// teks_baru[i] = toupper(teks[i]);
// }
// else{
// teks_baru[i] = tolower(teks[i]);
// }
// }
// cout << "Hasil Perubahan = " << teks_baru << endl;
// return 0;
//}


//#include <iostream>
//#include <fstream>
//using namespace std;
//int main()
//{
// ofstream myfile;
// myfile.open("TEST.txt", ios::app);
// cout<<"OPERASI FILE OFSTREAM"<<endl;
// cout<<"--------------"<<endl;
// if(!myfile.fail())
// {
// myfile<<"Belajar OPERASI FILE OFSTREAM"<<endl;
// myfile.close();
// cout<<"Text telah ditulis ke dalam File"<<endl;
// }else{
// cout<<"File tidak ditemukan"<<endl;
// }
// getchar();
// return 0;
//}



#include <iostream>
#include <fstream>
using namespace std;
int main()
{
 ifstream myfile;
 char sv_text;
 myfile.open("TEST.txt");
 cout<<"OPERASI FILE 2"<<endl;
 cout<<"--------------"<<endl;
 if(!myfile.fail())
 {
 cout<<"Isi dari File TEST.txt adalah ";
 while (!myfile.eof())
 {
 myfile.get(sv_text);
 cout<<sv_text;
 }
 myfile.close();
 }else{
 cout<<"File tidak ditemukan"<<endl;
 }
 getchar();
 return 0;
}
