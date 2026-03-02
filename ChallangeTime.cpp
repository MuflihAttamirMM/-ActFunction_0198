#include <iostream>
using namespace std;

float phi = 3.14159;
int r;

void input (){  
    cout << "Masukkan Ruas = ";
    cin >> r;
}

float luas_lingkaran(int c) {
    return phi * c * c;
}}  

void output() {
    cout << "Hasil luas Lingkaran = " << luas_lingkaran(r) << endl;
}
int main() {
    input();
}