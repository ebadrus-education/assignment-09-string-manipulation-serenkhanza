#include <iostream>
#include <string>
using namespace std;

int main() {
    string teks = "Saya sedang belajar matematika";
    int posisi = teks.find("Saya");

    if (posisi != string::npos)
        cout << "\"Saya\" ditemukan di posisi ke-" << posisi << endl;
    else
        cout << "Teks tidak ditemukan." << endl;
}

