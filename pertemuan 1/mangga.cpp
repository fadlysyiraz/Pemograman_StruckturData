#include <iostream>
using namespace std;

int main() {
    string a, b;
    int e = 50, f = 725, g = 1000;
    int mangga= 0, jambu = 0;
    int durian, nangka, semangka;
    int q, r, t;
    int y, u, i;
    int yui;

    cout << "Masukkan NPM Anda:";
    cin >> a;
    cin.ignore(); // Gunakan cin.ignore() untuk membersihkan karakter newline yang tertinggal di buffer.

    cout << "Masukkan Nama Anda:";
    getline(cin, b);

    cout << "Nilai e adalah 50, f adalah 725, dan g adalah 1000. Berapa hasil dari penjumlahan e, f, dan g: ";
    int efg;
    cin >> efg;
    int result1 = e + f + g;
    cout << "Hasil: " << result1 << endl;

    mangga -= 30;
    jambu = 70;
    int jambumangga;
    cout << "Hasil: " << (jambu + mangga) << endl;

    cout << "Masukkan nilai jambumagga: ";
    cin >> jambumangga;
    int result2 = jambu + mangga;
    cout << "Hasil: " << result2 << endl;

    r -= 75;
    int s = 35;
    t = 100;
    cout << "Nilai " << s << "+" << r << "+" << t << ": ";
    cin >> q;
    int result4 = q + r + t;
    cout << "Hasil: " << result4 << endl;

    y = 123;
    u = 456;
    i = 789;
    cout << "Nilai 123+456+789: " << y + u + i << endl;

    cout << "Masukkan nilai yui: ";
    cin >> yui;
    int result5 = y + u + i + yui;
    cout << "Hasil: " << result5 << endl;

    return 0;
}

