#include <iostream>
using namespace std;
struct name {
        char name[20];
};
struct roll {
        char roll[20];
        struct name info;
} data;
int main() {
        cout << "Masukkan Nama : ";
        cin >> data.info.name;
        cout << "Masukkan Status Mahasiswa : ";
        cin >> data.roll;
        
        cout << "Nama : " << data.info.name << "\nRoll : " << data.roll;
}
