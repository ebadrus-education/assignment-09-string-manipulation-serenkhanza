#include <iostream>
#include <string>
using namespace std;

int main() {
    string teks = "Pergi ke Malang";
    string potongan = teks.substr(0, 11); // mulai dari index 0, ambil 11 karakter
    cout << "Hasil substr(0, 11): " << potongan << endl;
}
