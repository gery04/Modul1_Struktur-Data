#include <iostream>
#include <iomanip>

using namespace std;

// Fungsi untuk menghitung luas persegi
double hitungLuasPersegi(double sisi) {
    return sisi * sisi;
}

int main() {
    // Deklarasi variabel untuk menyimpan sisi persegi
    double sisiPersegi;

    // Meminta input dari pengguna
    cout << "Masukkan panjang sisi persegi : ";
    cin >> sisiPersegi;

    // Panggil fungsi untuk menghitung luas persegi
    double luasPersegi = hitungLuasPersegi(sisiPersegi);

    // Menampilkan hasil
    cout << "Luas persegi dengan sisi " << sisiPersegi << " adalah : " << luasPersegi << endl;

    return 0;
}