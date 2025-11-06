#include <iostream>
#include <string>
#include <cctype> // untuk toupper, tolower
using namespace std;

int main() {
    string teks = "Gunung Semeru Sangat Indah";

    // Ubah ke huruf besar
    for (char &c : teks)
        c = toupper(c);
    cout << "Huruf besar: " << teks << endl;

    // Ubah ke huruf kecil
    for (char &c : teks)
        c = tolower(c);
    cout << "Huruf kecil: " << teks << endl;
}

