#include <iostream>
using namespace std;

float phi = 3.14159;
int jarijari;

void input (){  
    cout << "Masukkan Ruas = ";
    cin >> jarijari;
}

float luas_lingkaran(int c) {
    return phi * c * c;
}  

void output() {
    cout << "Hasil luas Lingkaran = " << luas_lingkaran(jarijari) << endl;
}
int main() {
    input();
    output();
}