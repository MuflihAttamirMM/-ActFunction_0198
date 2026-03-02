//library
#include <iostream>
using namespace std;

//deklarasi variabel global
int panjang, lebar;

//implementasi fungsi dan prosedur
void input(){
    cout << "Masukkan panjang: ";
    cin >> panjang;
    cout << "Masukkan lebar: ";
    cin >> lebar;   
}
int luasPersegi(int a,int b){
    return a * b;
}int jumlah(int x, int y, int z){
    return x + y + z;
}
void output(){
    cout << "Hasilnya : " <<luasPersegi(panjang, lebar) << endl;
}
int main(){//mulai
    input();
    output();
    cout << "Hasil penjumlahan: " << jumlah(3, 2, 7) << endl;
}//selesai