#include <cstdio>
int hitungSisaBagi(int bilangan) {
    if (bilangan == 0) {
        return 0;
    } else if (bilangan == 1) {
        return 1;
    } else {
        return hitungSisaBagi(bilangan - 2);
    }
}
void cekGenapGanjil(int bilangan) {
    if (hitungSisaBagi(bilangan) == 0) {
        printf("%d ", bilangan);
    } else {
        printf("%d ", bilangan);
    }
}
int main() {
    int bilangan1 = 200;
    int bilangan2 = 201;
    int bilangan3 = 200;
   
    cekGenapGanjil(bilangan1);
    cekGenapGanjil(bilangan2);
    cekGenapGanjil(bilangan3);
    return 0;
}
