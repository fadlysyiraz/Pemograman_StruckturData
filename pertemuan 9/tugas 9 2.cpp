#include <iostream>
using namespace std;

const float phi = 3.14; // Konstanta phi untuk perhitungan lingkaran

int hitungLuasLingkaran(int r){
    int luas;
    luas = phi * r * r;
    return luas;
}

void luasLingkaran(int r){
    int L = hitungLuasLingkaran(r);
    cout << "Luas lingkaran = " << L;
}

int main() {
    int r;
    char lagi;
    do {
        cout << "Menghitung Luas Lingkaran" << endl;
        cout << "Masukkan Jari-Jari : ";
        cin >> r;
        luasLingkaran(r);
        cout << endl;
        
        cout << "Ulang Lagi (y/n) : ";
        cin >> lagi;
        cout << endl;
    } while (lagi == 'y' || lagi == 'Y');

    return 0;
}
