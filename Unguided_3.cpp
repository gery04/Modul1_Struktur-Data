#include <iostream>
#include <map>

using namespace std;

int main() {
    // Membuat map dengan kunci bertipe string dan nilai bertipe int
    map<string, int> dataMap;

    // Menambahkan elemen ke dalam map
    dataMap["Alex"] = 20;
    dataMap["Jacob"] = 21;
    dataMap["Winson"] = 19;

    // Mengakses dan mencetak nilai berdasarkan kunci
    cout << "Umur Alex : " << dataMap["Alex"] << endl;
    cout << "Umur Jacob : " << dataMap["Jacob"] << endl;
    cout << "Umur Winson : " << dataMap["Winson"] << endl;

    return 0;
}
