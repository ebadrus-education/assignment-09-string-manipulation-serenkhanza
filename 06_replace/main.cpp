#include <iostream>
#include <string>
using namespace std;

int main() {
    string teks = "Saya makan bakso";
    teks.replace(11, 5, "soto"); // ganti "bakso" dengan "soto"
    cout << "Setelah replace: " << teks << endl;
}
