#include <iostream>
using namespace std;
int pangkat(int x, int y) {
    if (y == 0) {
        return 1;
    } else {
        return x * pangkat(x, y - 1);
    }
}
int main() {
    int nilai_x, nilai_y;
    cout << "Menghitung Pangkat Dengan Fungsi Rekursif" << endl;
    cout << "Masukkan nilai x: ";
    cin >> nilai_x;
    cout << "Masukkan nilai y: ";
    cin >> nilai_y;
    int hasil_pangkat = pangkat(nilai_x, nilai_y);
    cout << "Hasil dari " << nilai_x << " pangkat " << nilai_y << " adalah: " << hasil_pangkat << endl;
    return 0;
}
