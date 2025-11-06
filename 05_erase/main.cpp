#include <iostream>
#include <string>
using namespace std;

int main() {
    string teks = "cuaca sedang sangat dingin";
    teks.erase(8, 4); // hapus mulai index 8 sebanyak 4 karakter ("C++ ")
    cout << "Setelah erase: " << teks << endl;
}

