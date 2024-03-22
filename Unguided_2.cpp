#include <iostream>

using namespace std;

// Struct
struct Employee
{
    const char *name;
    const char *address;
    int age;
};

int main()
{
    // menggunakan struct
    struct Employee epl1, epl2, epl3;
    // mengisi nilai ke struct
    epl1.name = "Olan";
    epl1.address = "Pondok Indah";
    epl1.age = 29;
    epl2.name = "Fattah";
    epl2.address = "Pantai Indah Kapuk";
    epl2.age = 30;
    epl3.name = "Radit";
    epl3.address = "New York";
    epl3.age = 28;

    // mencetak isi struct
    cout << "Employee 1" << endl;
    cout << "Nama : " << epl1.name << endl;
    cout << "Address : " << epl1.address << endl;
    cout << "Umur : " << epl1.age << endl;
    cout << "Employee 2" << endl;
    cout << "Nama : " << epl2.name << endl;
    cout << "Address : " << epl2.address << endl;
    cout << "Umur : " << epl2.age << endl;
    cout << "Employee 3" << endl;
    cout << "Nama : " << epl3.name << endl;
    cout << "Address : " << epl3.address << endl;
    cout << "Umur : " << epl3.age << endl;

    return 0;
}
