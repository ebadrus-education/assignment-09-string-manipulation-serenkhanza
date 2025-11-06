#include <iostream>
#include <string>
using namespace std;

int main() {
    string teks1 = "Selamat";
    string teks2 = " Pagi";

    string gabung1 = teks1.append(teks2); // pakai append()
    string gabung2 = teks1 + teks2;       // pakai operator +

    cout << "append() : " << gabung1 << endl;
    cout << "operator + : " << gabung2 << endl;
}
