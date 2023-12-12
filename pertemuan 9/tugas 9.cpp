#include <iostream>
using namespace std;

int hitungluaspersegi(int sisi) {
    int Luas;
    Luas = sisi * sisi;
    return Luas;
}

void luasPersegi(int sisi) {
    int Luas = hitungluaspersegi(sisi);
    cout << "Luas Persegi = " << Luas;
}

int main() {
    int sisi;
    char lagi;
    do {
        cout << "Menghitung Luas Persegi" << endl;
        cout << "Masukkan Sisi : ";
        cin >> sisi;
        luasPersegi(sisi);
        cout << endl;

        cout << "Ulang Lagi (y/n) : ";
        cin >> lagi;
        cout << endl;
    } while (lagi == 'y' || lagi == 'Y');
    
    return 0;
}
